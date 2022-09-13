#include <iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char favchar;
    float salary;
} ep;

union money
{
    int rice;
    char car;
    float pounds;
};

int main()
{
    //structure is a user defined data type
    struct employee aditya;
    aditya.eId = 10;
    aditya.favchar = 'a';
    aditya.salary = 1200000;
    cout << "Employee eId of aditya is " << aditya.eId << endl;
    cout << "Employee favchar of aditya is " << aditya.favchar << endl;
    cout << "Employee salary of aditya is " << aditya.salary << endl;

    //union user defined data type
    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    m1.pounds = 11.11111;
    cout << m1.car << endl;

    // enum

    enum meal
    {
        breakfast = 11,
        lunch,
        dinner
    };
    cout << breakfast;
    return 0;
}