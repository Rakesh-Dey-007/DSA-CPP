#include <iostream>
#include <vector>
using namespace std;

// Find Pivot Index ---> Leetcode 724
// input : {3, 7, 1, 6, 5, 6}
// output : 3    Element : 6
// Explain : 3+7+1 = 11, 6, 5+6 = 11

int PivotIndex(vector<int> &nums)
{
    int leftSum = 0, totalSum = 0;
    for (int i : nums)
    {
        totalSum += i;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (leftSum == totalSum - leftSum - nums[i])
        {
            return i;
        }
        else
        {
            leftSum += nums[i];
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {3, 7, 1, 6, 5, 6};

    int Pivot = PivotIndex(nums);

    cout << "Pivot Index : " << Pivot << endl;
    cout << "Pivot Element : " << nums[Pivot] << endl;

    return 0;
}