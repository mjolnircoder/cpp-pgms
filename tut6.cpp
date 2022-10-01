#include <iostream>

using namespace std;
int c = 45;
int main()
{
 
    float d = 34.4f;
    long double e = 34.4l;
    // // 34.4 is a double not a float
    // // cout << "the value of d is:" << d << endl << "the value of e is:" << e;
    cout << "the sizeof 34.4 is" << sizeof(34.4) << endl;

    cout << "the sizeof 34.4f is" << sizeof(34.4f) << endl;

    cout << "the sizeof 34.4F is" << sizeof(34.4F) << endl;


    //********Refrence Variables************
    float x = 34;
    float &a = x; // y is the refrence variable of x
    cout << x << endl;
    cout << a << endl;

    //********Typecasting************
    int a = 45;
    float b = 34.67;
    cout << "the value of b" << int(b) << endl;
    cout << "the value of b" << (int)b << endl;

    cout << a + b << endl;
    cout << a + int(b) << endl;
    cout << a + (int)b << endl;

    return 0;
}
