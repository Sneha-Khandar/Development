// Pattern 1:   1 12 123 ……. n

// Enter a number: 5
// 1 12 123 1234 12345 

// Enter a number: 5
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 



#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j;
    }
      cout<<"  ";
  
}
return 0;
}