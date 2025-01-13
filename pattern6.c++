//     Pattern 5:   1   2 3 2    3 4 5 4 3     4 5 6 7 6 5 4 ........


// Enter a number: 6
// 1
// 232
// 34543
// 4567654
// 567898765
// 67891011109876
    
    
    
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
            a = i;
            for (int j = 1; j <= i; j++)
            {
                cout << a;
                a++;
            }
            for (int j = a - 2; j >= i; j--)
            {
                cout << j;
            }
            cout << endl;
        }
        return 0;
    }