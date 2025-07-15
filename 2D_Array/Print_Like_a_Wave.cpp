#include <iostream>
#include <vector>
using namespace std;

// Print Like A Wave ---> Code Studio.
// input ---> 1 2 3 4
//            5 6 7 8
//            9 10 11 12

// output ---> 1 5 9 10 6 2 3 7 11 12 8 4

vector<int> wavePrint(vector<vector<int>> matrix)
{
    int mcols = matrix[0].size();
    int nrows = matrix.size();

    vector<int> ans;

    for (int col = 0; col < mcols; col++)
    {
        if (col % 2 == 0)
        {
            for (int row = 0; row < nrows; row++)
            {
                ans.push_back(matrix[row][col]);
            }
        }
        else
        {
            for (int row = nrows - 1; row >= 0; row--)
            {
                ans.push_back(matrix[row][col]);
            }
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    vector<int> ans = wavePrint(matrix);
    cout << "Print a Matrix Like a Wave ---> " << endl;
    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}