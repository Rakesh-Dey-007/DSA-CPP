#include <iostream>
using namespace std;

// Butterfly Pattern with Stars --->

int main()
{

    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        for (int s = 0; s < n - i - 1; s++)
        {
            cout << " ";
        }
        for (int s = 0; s < n - i - 1; s++)
        {
            cout << " ";
        }
        for (int j = i + 1; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        for (int s = 0; s < n - i - 1; s++)
        {
            cout << " ";
        }
        for (int s = 0; s < n - i - 1; s++)
        {
            cout << " ";
        }
        for (int j = i + 1; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}