#include <iostream>
#include <vector>
using namespace std;

void BubbleSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

void Print(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {15, 16, 6, 8, 5};
    int n = arr.size();

    cout << "Original Array ---> ";
    Print(arr, n);

    BubbleSort(arr, n);

    cout << "Apply Bubble Sort ---> ";
    Print(arr, n);

    return 0;
}