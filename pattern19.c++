// Online C++ compiler to run C++ program online
// Pattern 19  Fibonacci Pyramid
// 1
// 1 2
// 3 5 8
// 13 21 34 55
// 89 144 233 377 610

#include <iostream>
using namespace std;
int main()
{
    int n, a = 0, b = 1, c;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << b << " ";
            c = a + b;
            a = b;
            b = c;
        }
        cout << endl;
    }

    return 0;
}
