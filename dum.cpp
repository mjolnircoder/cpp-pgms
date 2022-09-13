#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int sum = 0;
    int i = 2;

    while (i <= a)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        i = i + 1;
    }

    // while (i <= a)
    // {
    //     sum = sum + i;
    //     i=i+1;

    /* code */

    cout << sum;
    return 0;
}