#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Find Multiple Duplicate in an Array --->

vector<int> findDuplicates(vector<int> nums)
{
    vector<int> ans;
    unordered_map<int, int> freq;

    for (int num : nums)
    {
        freq[num]++;
    }

    for (const auto &pair : freq)
    {
        if (pair.second > 1)
        {
            ans.push_back(pair.first);
        }
    }

    return ans;
}

int main()
{
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};

    vector<int> duplicates = findDuplicates(nums);

    cout << "Duplicates: ";
    for (int num : duplicates)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}