// Pattern 22

// 1
// 1 2
// 1 2 6
// 1 2 6 24
// 1 2 6 24 120

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

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            cout << factorial(j) << " ";
        }
        cout << endl;
    }

    return 0;
}