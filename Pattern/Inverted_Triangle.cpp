#include<iostream>
using namespace std;

// Inverted Triangle Using Number --->

int main(){
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        // For space --->
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // For number --->
        for (int j = i; j < n; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}