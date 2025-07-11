#include <iostream>
#include <vector>
using namespace std;

// Row Wise Sum ---> Find Largest Row Sum --->

vector<int> rowSum(vector<vector<int>> arr)
{
    int row = arr.size();
    int col = arr[0].size();

    vector<int> ans;

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        ans.push_back(sum);
    }
    return ans;
}

int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    vector<int> ans = rowSum(arr);
    int maxSum = 0;

    cout << "All Row Sum : ";
    for (int i : ans)
    {
        cout << i << " ";
        maxSum = max(i, maxSum);
    }
    cout << endl;
    cout << "Largest Row Wise Sum : " << maxSum << endl;

    return 0;
}