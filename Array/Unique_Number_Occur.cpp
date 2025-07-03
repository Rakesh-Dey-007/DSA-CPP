#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

// Find Unique Number of Occurrences ---> Leetcode 1207

bool UniqueOccurrences(vector<int> &arr)
{
    unordered_map<int, int> freqMap;
    unordered_set<int> uniqueCounts;
    for (int num : arr)
    {
        freqMap[num]++;
    }
    for (const auto &pair : freqMap)
    {
        if (uniqueCounts.find(pair.second) != uniqueCounts.end())
        {
            return false;
        }
        uniqueCounts.insert(pair.second);
    }
    return true;
}

int main()
{
    vector<int> arr = {1,2,2,1,1,3};
    bool result = UniqueOccurrences(arr);

    if(result == 1){
        cout << "Unique Occurrences Present in the Array." << endl;
    }
    else{
        cout << "Unique Occurrences not Present in the Array." << endl;
    }

    return 0;
}