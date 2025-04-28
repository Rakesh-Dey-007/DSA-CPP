#include <iostream>
using namespace std;

int Binary_To_Decimal(int num)
{
    int rem, pow = 1, ans = 0;
    while (num > 0)
    {
        rem = num % 10;
        ans += pow * rem;
        num = num / 10;
        pow = pow * 2;
    }
    cout << "Decimal Number is : " << ans << endl;
    return ans;
    // int result = DecimalToOctal(ans);
}

int Decimal_To_Octal(int binNum)
{
    int num = Binary_To_Decimal(binNum);
    int rem, pow = 1, result = 0;
    while (num > 0)
    {
        rem = num % 8;
        num = num / 8;
        result += pow * rem;
        pow = pow * 10;
    }
    cout << "Octal Number is : " << result << endl;
}

int main()
{
    int num;
    cout << "Enter a Binary Number : ";
    cin >> num;
    int Conversion = Decimal_To_Octal(num);
    return 0;
}