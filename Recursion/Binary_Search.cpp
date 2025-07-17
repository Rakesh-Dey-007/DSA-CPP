#include <iostream>
#include <vector>
using namespace std;

// Binary Search using Recursion and returning the Index

int binarySearch(const vector<int> &arr, int st, int end, int target)
{
    if (st > end)
    {
        return -1; // target not found
    }

    int mid = st + (end - st) / 2;

    if (arr[mid] == target)
    {
        return mid; // target found
    }
    else if (arr[mid] > target)
    {
        return binarySearch(arr, st, mid - 1, target); // search left
    }
    else
    {
        return binarySearch(arr, mid + 1, end, target); // search right
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 7;

    int index = binarySearch(arr, 0, arr.size() - 1, target);

    if (index != -1)
    {
        cout << "Target found at index: " << index << endl;
    }
    else
    {
        cout << "Target not found in the array." << endl;
    }

    return 0;
}
