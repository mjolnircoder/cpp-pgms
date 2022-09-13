#include <iostream>
#include <cmath>
using namespace std;

class triangle
{
public:
    void area(int a)
    {
        cout << ((sqrt(3) / 4) * a * a) << endl;
    }
    void area(int a, int b)
    {
        cout << ((a * b) / 2) << endl;
    }

    void area(int a, int b, int c)
    {
        float S = float(a + b + c) / 2;
        cout << (sqrt(S) * (S - a) * (S - b) * (S - c));
    }
};

int main()
{
    triangle obj;
    obj.area(2);
    obj.area(5, 3);
    obj.area(2, 3, 4);
    return 0;
}
