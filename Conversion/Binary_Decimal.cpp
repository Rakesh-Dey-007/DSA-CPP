#include <iostream>
using namespace std;

int Binary_To_Decimal(int num)
{
    int ans = 0, pow = 1, rem;
    while (num > 0)
    {
        rem = num % 10;
        ans += rem * pow;
        num = num / 10;
        pow = pow * 2;
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter a Binary Number : ";
    cin >> num;
    int result = Binary_To_Decimal(num);
    cout << "Decimal Number is : " << result << endl;

    return 0;
}