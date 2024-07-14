#include<iostream>
using namespace std;

inline int product(int a,int b){  // inline fucntion replaces recurrence of function call with statement in the function
    return a*b;                   // use for small functions
                                  // reduces compilation time
}

int value(int a, float b=1.08){ // b is default argument
    return a*b;

}

/* xxxxxxxxxxxx constant arguments example xxxxxxxxxxxxxxx */
// int strlen(const char* p){   
    // this is mainly used when passing pointers so that original value that pointer points to
    // does not change
// }

int main(){
    int a,b;
    cout<<"enter two numbers to multiply"<<endl;
    cin>>a;    cin>>b;
    cout<<"after multiplication: "<<product(a,b)<<endl;
    cout<<"the money after 1 year: "<<value(100000)<<endl; // default argument taken
    cout<<"the money after 1 year: "<<value(100000,1.1)<<endl; // over-ride default argument
    return 0;
}