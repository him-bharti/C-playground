#include<iostream>
using namespace std;

int main(){
    int x =34;
    int* y = &x;
    
    // & --> address of operator
    cout<<"address of x: "<<&x<<endl;
    cout<<"address of x: "<<y<< endl;

    // * --> value at address operator(dereference operator)
    cout<<"value at x: "<<*y<<endl;

    // pointer to pointer
    int** c = &y;
    cout<<"address of y: "<<c<<endl;
    cout<<"address of y: "<<&y<<endl;
    cout<<"value at y: "<<**c<<endl;


    return 0;
}
