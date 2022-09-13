#include <iostream>
#include <cmath>
using namespace std;
/* program to remove middlemost digit from a number and printing the new number */

int main()
{
    int num, temp, count = 0, i, result = 0, rem, rev = 0;
    float mid = 0.0;

    cout << "enter atleast a three digit number" << endl;
    cin >> num;
    temp = num;
    while (temp > 0)
    {
        temp = temp / 10;
        count++;
    }
    temp = num;
    do
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    } while (temp > 0);
    
    temp = rev;
    
    float a = (float)count / 2;
    
    mid = ceil(a);
    
    if (count % 2 == 0)
    {
        for (i = 1; i <= count; i++)
        {
            if (i == mid || i == mid + 1)
            {
                temp /= 10;
            }
            else
            {
                rem = temp % 10;
                result = result * 10 + rem;
                temp = temp / 10;
            }
        }
    }
    else
    {
        for (i = 1; i <= count; i++)
        {
            if (i == mid)
            {
                temp /= 10;
            }
            else
            {
                rem = temp % 10;
                result = result * 10 + rem;
                temp = temp / 10;
            }
        }
    }
    cout << "the new number after removing middlemost digit from " << num << " is " << result << endl;
    return 0;
}
