#include <iostream>
#include <vector>
using namespace std;

// Find Peak Index in a Mountain Array ---> Leetcode 852

int peakIndex(vector<int> &arr)
{
    int st = 0, end = arr.size() - 1, mid;
    while (st < end)
    {
        mid = st + (end - st) / 2;
        if (mid < end && arr[mid] < arr[mid + 1])
        {
            st = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return st;
}

int main()
{
    vector<int> arr = {0, 2, 1, 0};
    int Index = peakIndex(arr);
    cout << "Peak Index : " << Index << endl;
    cout << "Peak Element : " << arr[Index] << endl;

    return 0;
}