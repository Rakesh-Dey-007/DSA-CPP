#include <iostream>
using namespace std;

int Decimal_To_Binary(int num)
{
    int ans = 0, pow = 1, rem;
    while (num > 0)
    {
        rem = num % 2;
        num = num / 2;
        ans += (rem * pow);
        pow = pow * 10;
    }
    return ans;
}

int main()
{
    int num, Result;
    cout << "Enter a Decimal Number : ";
    cin >> num;
    Result = Decimal_To_Binary(num);
    cout << "Binary Number : " << Result << endl;

    return 0;
}