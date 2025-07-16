#include <iostream>
#include <vector>
using namespace std;

// Spiral Print --->
// input matrix = { 1, 2, 3
//   4, 5, 6
//   7, 8, 9 }

// output = { 1, 2, 3, 6, 9, 8, 7, 4, 5 }

vector<int> spiralPrint(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();
    vector<int> ans;
    int count = 0, total = row * col;
    int stRow = 0, stCol = 0;
    int endRow = row - 1, endCol = col - 1;

    while (count < total)
    {
        // Print Starting Row --->
        for (int index = stCol; count < total && index <= endCol; index++)
        {
            ans.push_back(matrix[stRow][index]);
            count++;
        }
        stRow++;
        // Printing Ending Column --->
        for (int index = stRow; count < total && index <= endRow; index++)
        {
            ans.push_back(matrix[index][endCol]);
            count++;
        }
        endCol--;
        // Print Ending Row --->
        for (int index = endCol; count < total && index >= stCol; index--)
        {
            ans.push_back(matrix[endRow][index]);
            count++;
        }
        endRow--;
        // Print Starting Column --->
        for (int index = endRow; count < total && index >= stRow; index--)
        {
            ans.push_back(matrix[index][stCol]);
            count++;
        }
        stCol++;
    }

    return ans;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    vector<int> spiral = spiralPrint(matrix);
    cout << "After Apply Spiral Print Function ---> " << endl;
    for (int i : spiral)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
