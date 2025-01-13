// Pattern 21 Alphabet Zigzag

// A
// C E
// G I K
// M O Q S
// U W Y

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (char)(a + 64) << " ";
            a += 2;
        }
        cout << endl;
    }

    return 0;
}