#include <iostream>
using namespace std;

int main()
{
    int age, x
;
    cout << "Tell me your age" << endl;
    cin >> age;

    // if ((age < 18) && (age>0))
    // {

    //     cout << "You cannot to the party" << endl;
    // }

    // else if (age == 18)
    // {
    //     cout << "You are a kid, you can get the kid pass for the party" << endl;
    // }

    // else
    // {
    //     cout << "You can come to the party" << endl;
    // }
    switch (age)
    {
    case 22:
        cout << "You are 22" << endl;
        break;
    case 32:
        cout << "You are 32" << endl;
        break;
    case 34:
        cout << "You are 34" << endl;
        break;
    default:
        cout << "No special cases" << endl;
        break;
    }

    return 0;
};
