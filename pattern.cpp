#include<iostream>

using namespace std;

int main(){

    int n, a;
    cout<<"Enter the value n" <<endl;
    cin>> n;

    for (int i = 0; i<n; i++){

        for (int j  = 0; j < i+1 ; j++)
        {
            /* code */printf("*");
        }
        printf("\n");
    }
    return 0;
}
