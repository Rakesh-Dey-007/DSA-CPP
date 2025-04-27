#include <iostream>
using namespace std;

// Hollow Pyramid with Stars --->

int main()
{

    int n = 5; // Number of rows in the pyramid
    for (int i = 0; i < n; i++)
    {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // Print stars and spaces for hollow structure
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j == 0 || j == 2 * i || i == n - 1)
            {
                // Print star at the boundaries and for the last row
                cout << "*";
            }
            else
            {
                // Print space for hollow part
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}