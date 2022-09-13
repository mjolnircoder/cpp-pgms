#include <iostream>

using namespace std;
int main()
{
     int n;
     cin >> n;

     int i = 1;
     while (i <= n)
     {
          int j = 1;
          while (j <= n)
          {
               cout << "*"; /* code */
               j++;
          }
          cout<<endl;
          i++;
     }

     // while (i < n)
     // {
     //      if (n % i == 0)
     //      {
     //           cout << "not prime" <<i<< endl;
     //      }
     //      else
     //      {
     //           cout << "prime"<<i<<endl;
     //      }
     //      i++;
     // }

     return 0;
}