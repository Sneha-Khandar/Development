// Pattern 4:   1! -3! 5! -7! 9! ...... n!

// Enter a number: 5
// 1 -6 120 -5040 362880


#include <iostream>
using namespace std;
int factorial(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sign = 1;
    for (int i = 1; i <= n; i++)
    {
        // print odd factorial
        int fact = factorial(2 * i - 1);
        cout << sign * fact << " ";
        sign *= -1;
    }
    return 0;
}