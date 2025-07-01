#include <iostream>
#include <vector>
using namespace std;

// Check if Array is Sorted & Rotated ---> Leetcode 1752
// input : {3, 4, 5, 1, 2}
// output : true

bool check(vector<int> &arr)
{
    int n = arr.size();

    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            count++;
        }
    }
    if (arr[n - 1] > arr[0])
    {
        count++;
    }
    return count <= 1;
}

int main()
{
    vector<int> arr = {3, 4, 5, 1, 2};
    if (check(arr) == 1)
    {
        cout << "Array is Sorted and Rotated." << endl;
    }
    else
    {
        cout << "Array is not Sorted and Rotated." << endl;
    }

    return 0;
}