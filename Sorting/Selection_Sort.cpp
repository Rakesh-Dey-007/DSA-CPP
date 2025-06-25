#include <iostream>
#include <vector>
using namespace std;

void SelectionSort(vector<int> &arr, int n)
{
    int min = 1;

    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            swap(arr[i], arr[min]);
        }
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
    vector<int> arr = {7, 4, 10, 8, 3, 1};
    int n = arr.size();

    cout << "Original Array ---> ";
    Print(arr, n);

    SelectionSort(arr, n);

    cout << "Apply Selection Sort ---> ";
    Print(arr, n);

    return 0;
}