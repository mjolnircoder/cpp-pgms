#include <iostream>

using namespace std;

int main()
{
    // what is array? - it is a collection of items of similar type stored in contigous location.
    int marks[4] = {
        23,
        33,
        55,
        66,
    };

    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // you can change the value of array
    // marks[2] = 96;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    // for (int i = 0; i < 4; ++i)
    // {
    //     /* code */
    //     cout << "the value of marks " << i << " is " << marks[i] << endl;
    // }
    // cout << "\n\n\n\n\n\n\n\n";
    // for (int i = 0; i < 4; i++)
    // {
    //     /* code */
    //     cout << "the value of marks " << i << " is " << marks[i] << endl;
    // }

    // int i = 0;
    // while (i < 4)
    // {
    //     cout << "the value of marks " << i << " is " << marks[i] << endl;
    //     i++;
    // }

    //  Pointers and Arrays

    int *p = marks;
    // cout << *p++;
    // cout << *p << endl;
    // cout << marks[0] << endl;
    cout << "The value of marks[0]" << *p << endl;
    cout << "The value of marks[0]" << *p++ << endl;
    cout << "The value of marks[0]" << p++ << endl;
    cout << "The value of marks[1]" << *(p) << endl;
    cout << "The value of marks[1]" << *(p++) << endl;
    cout << "The value of marks[2]" << *(p + 2) << endl;
    cout << "The value of marks[3]" << *(p + 3) << endl;

    return 0;
}