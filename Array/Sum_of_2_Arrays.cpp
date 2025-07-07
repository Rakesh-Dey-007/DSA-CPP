#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Sum of two Arrays --->

// Given arr1 = {5, 6, 3} (representing 563) and arr2 = {8, 4, 2} (representing 842), the sum should be {1, 4, 0, 5} (representing 1405). 

void ReverseArray (vector<int>& arr){
    reverse(arr.begin(), arr.end());
}

vector<int> findArraySum(vector<int>&a, int n, vector<int> &b, int m){
    int j = m-1, i = n-1, carry = 0;
    vector<int> ans;
    while(i >= 0 || j >= 0 || carry){
        int sum = carry;
        if(i >= 0){
            sum += a[i--];
        }
        if(j >= 0){
            sum += b[j--];
        }
        carry = sum / 10;
        ans.push_back(sum % 10);
    }
    ReverseArray(ans);
    return ans;
}

int main(){
    vector<int> a = {5,6,3};
    int n = a.size();

    vector<int> b = {8,4,2};
    int m = b.size();

    cout << "Sum of Array A & B : ";
    vector<int> ans = findArraySum(a, n, b, m);
    for(int i : ans){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}