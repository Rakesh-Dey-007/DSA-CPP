#include <iostream>
#include <vector>
using namespace std;

// Binary Search in 2D Array --->

vector<int> binarySearch(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();
    int st = 0, end = row * col - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        int rowIndex = mid / col;
        int colIndex = mid % col;

        if (matrix[rowIndex][colIndex] == target)
        {
            return {rowIndex, colIndex};
        }
        else if (matrix[rowIndex][colIndex] < target)
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return {-1, -1};
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int target = 7;
    vector<int> result = binarySearch(matrix, target);

    if (result[0] != -1)
    {
        cout << "Element found at: (" << result[0] << ", " << result[1] << ")" << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }

    return 0;
}