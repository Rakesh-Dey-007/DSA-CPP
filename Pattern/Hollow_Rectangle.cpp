#include <iostream>
using namespace std;

// Hollow Rectangle with Borders --->

int main()
{

    int n = 5, m = 7;

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            for (int j = 0; j < m; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            cout << "*";
            for (int j = 0; j < m - 2; j++)
            {
                cout << " ";
            }
            cout << "*" << endl;
        }
    }

    return 0;
}