#include <iostream>
using namespace std;

// Pyramid Pattern  --->

int main()
{
    int n = 4;
    char ch = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
            // ch++;
            for (int j = 0; j < 1; j++)
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}