#include <iostream>
#include <vector>
using namespace std;

// Rotate an Array by 2 step ---> Leetcode 189
// input : -1, -100, 3, 99
// output : 3, 99, -1, -100

void RotateArray(vector<int> &arr, int k=2)
{
    int n = arr.size();
    vector<int> temp(n);

    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }
    arr = temp;
}

void Print(vector<int> arr)
{
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{

    vector<int> arr = {-1, -100, 3, 99};
    cout << "Original Array : ";
    Print(arr);

    RotateArray(arr, 2);
    cout << "After Rotate : ";
    Print(arr);

    return 0;
}