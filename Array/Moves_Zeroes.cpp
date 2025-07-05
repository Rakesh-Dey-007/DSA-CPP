#include<iostream>
#include<vector>
using namespace std;

// Moves Zeroes in the end ---> Leetcode 283
// input : {0, 1, 0, 3, 12}
// output : {1, 3, 12, 0, 0}

int MovesZerors(vector<int> &arr){
    int size = arr.size();
    int i = 0;
    for(int j = 0; j < size; j++){
        if(arr[j] != 0){
            swap(arr[i], arr[j]);
            i++;
        }
    }
}

void Print(vector<int> &arr){
    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    vector<int> arr = {0, 1, 0, 3, 12};
    cout << "Original Array : ";
    Print(arr);

    MovesZerors(arr);
    cout << "After Moves Zeros : ";
    Print(arr);

    return 0;
}