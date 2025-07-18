#include <iostream>
#include <vector>
using namespace std;

// Rorate your Matrix/2D Array by  90 Degree ---> Leetcode 48.
// Input: matrix = [[1,2,3], [4,5,6], [7,8,9]]
// Output: [[7,4,1], [8,5,2], [9,6,3]]

void RorateMatrix(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();

    vector<vector<int>> temp(col, vector<int>(row));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            temp[j][row - 1 - i] = matrix[i][j];
        }
    }
    matrix = temp;
}

void print2DArray(const vector<vector<int>> &matrix)
{
    for (const auto &row : matrix)
    {
        for (const auto &elem : row)
        {
            cout << elem << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    RorateMatrix(matrix);
    print2DArray(matrix);

    return 0;
}