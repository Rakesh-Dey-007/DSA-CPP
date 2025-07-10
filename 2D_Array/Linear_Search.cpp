#include<iostream>
#include<vector>
using namespace std;

// Linear Search in 2D Array
vector<int> linearSearch(int arr[][3], int target, int row, int col) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(target == arr[i][j]) {
                return {i, j};  // return position if found
            }
        }
    }
    return {-1, -1};  // return {-1, -1} if not found
}

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int target = 7;
    vector<int> result = linearSearch(arr, target, 3, 3);

    if (result[0] != -1) {
        cout << "Element found at: (" << result[0] << ", " << result[1] << ")" << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
