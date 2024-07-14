#include<iostream>
using namespace std;

// typecasting example
int main(){
    int a=4;
    float b =23.67;
    cout<<"sum of a + b: "<<(a + int(b))<<endl;
    cout<<"sum of a + b: "<<((float(a) + b))<<endl;
    cout<<"sum of a + b: "<<(a + b)<<endl;

// reference variable example
    int x =34;
    int &y = x; // y basically stores address of x
    cout<<"the value of x is: "<<x<<endl;
    cout<<"the value of y is: "<<y<<endl;
    return 0;
}