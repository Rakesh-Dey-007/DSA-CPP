#include <iostream>
#include <vector>
using namespace std;

// Find Pivot Element in an Array --->

int findPivot(vector<int> arr, int size)
{
    int st = 0, end = size - 1, mid;
    while (st < end)
    {
        mid = st + (end - st) / 2;
        if (arr[mid] >= arr[0])
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
    // Rotated sorted array
    vector<int> arr = {4, 5, 6, 1, 2, 3};
    int n = arr.size();

    int pivot = findPivot(arr, n);

    cout << "Pivot Element : " << arr[pivot] << endl;
    cout << "Pivot Element Index : " << pivot << endl;

    return 0;
}