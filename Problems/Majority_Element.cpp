#include <iostream>
#include <vector>
using namespace std;

// Find Majority Element in an Array --->

int MajorityElement(vector<int> arr, int size)
{
    int element = -1, count = 0;
    for (int i = 0; i < size; i++)
    {
        if (count == 0)
        {
            element = arr[i];
            count++;
        }
        else if (element == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    count = 0;
    for (int j = 0; j < size; j++)
    {
        if (element = arr[j])
        {
            count++;
        }
    }

    return (count > size / 2) ? element : -1;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int size = arr.size();

    int element = MajorityElement(arr, size);
    cout << "Majority Element of the Array : " << element << endl;

    return 0;
}