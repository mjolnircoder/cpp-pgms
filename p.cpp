// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// // #include <algorithm>
// using namespace std;    


// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
//     int a,b,c;
//     cin>> a >> b >>c;    
//     cout << a+b+c;
//     return 0;
// }



// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {

// float basic, ta,da,gs;
// basic=1000; ta=800; da=5000;
// gs=basic+ta+da;
// cout<<setw(10)<<"Basic"<<setw(10)<<basic<<endl
// <<setw(10)<<"TA"<<setw(10)<<ta<<endl
// <<setw(10)<<"DA"<<setw(10)<<da<<endl
// <<setw(10)<<"GS"<<setw(10)<<gs<<endl;
// return 0;
// }

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
// cout << setw(20) << setfill('t') << "w3schools.in " << setw(20) << setfill('t')<<"Test"<< endl;
// return 0;
// }

// #include<iostream>

// using namespace std;

// int main(){

// int i = 0;
// if(i<3){
//     cout<<i;
//     i++;
// }

#include <iostream>

using namespace std;
 const int MAX = 3;

int main () {
//    int  var[MAX] = {10, 100, 200};
//    int* ptr;

//    // let us have address of the last element in pointer.
//    ptr = &var[MAX-1];
   
//    for (int i = MAX; i > 0; i--) {
//       cout << "Address of var[" << i << "] = ";
//       cout << ptr << endl;

//       cout << "Value of var[" << i << "] = ";
//       cout << *ptr << endl;

//       // point to the previous location
//       ptr--;
//    }
   
float arr[3];

    // declare pointer variable
    float *ptr;
    
    cout << "Displaying address using arrays: " << endl;

    // use for loop to print addresses of all array elements
    for (int i = 0; i < 3; ++i)
    {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    // ptr = &arr[0]
    ptr = arr;

    cout<<"\nDisplaying address using pointers: "<< endl;

    // use for loop to print addresses of all array elements
    // using pointer notation
    for (int i = 0; i < 3; ++i)
    {
        cout << "ptr + " << i << " = "<< ptr + i << endl;
    }









   return 0;
}




// return 0;
// }