#include <iostream>
#include <vector>
using namespace std;

// Fibonacci Number ---> Leetcode 509.

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int ans = fib(n - 1) + fib(n - 2);
    return ans;
}

int main()
{
    int num = 10;
    int ans = fib(num);
    cout << num << " Fibonacci Number : " << ans << endl;

    return 0;
}