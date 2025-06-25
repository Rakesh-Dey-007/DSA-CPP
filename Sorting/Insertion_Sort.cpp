#include<iostream>
#include<vector>
using namespace std;

void SelectionSort(vector<int> &arr, int n){
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i-1;

        while(j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

void Print(vector<int> arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    vector<int> arr = {10,1,7,4,8,2,11};
    int n = arr.size();

    cout << "Original Array ---> ";
    Print(arr, n);

    SelectionSort(arr, n);

    cout << "Apply Selection Sort ---> ";
    Print(arr, n);

    return 0;
}