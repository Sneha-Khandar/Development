// Pattern 17 
// 1
// 3 2
// 6 5 4
// 10 9 8 7
// 15 14 13 12 11


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
        int c = a + i - 1;
        for (int j = c; j >= a; j--)
        {
            cout << j << " ";
        }
        cout << endl;
        a = c + 1;
    }

    return 0;
}
