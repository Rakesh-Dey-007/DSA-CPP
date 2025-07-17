#include <iostream>
using namespace std;

// Linear Search using Recursion to find the index

int linearSearch(int *arr, int size, int target, int index = 0)
{
    if (size == 0)
    {
        return -1; // target not found
    }
    if (arr[0] == target)
    {
        return index; // target found at this index
    }
    return linearSearch(arr + 1, size - 1, target, index + 1); // search in the rest of the array
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]); // Correct way to get size of array in C++
    int target = 7;

    int index = linearSearch(arr, size, target);
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
