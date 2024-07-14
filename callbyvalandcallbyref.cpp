#include<iostream>
using namespace std;

void swap(int , int);  // function declaration or function prototyping
void swapointer(int*, int*);
void swapref(int &, int &);

int main(){
    int a = 10;int b = 13;
    swap(a,b); // does not swap the value
    cout<<a<<" "<<b<<endl;
    swapointer(&a,&b);  // swaps the value
    cout<<a<<" "<<b<<endl;
    swapref(a,b); // swaps the value
    cout<<a<<" "<<b<<endl;
    return 0;
}

void swap(int a, int b){   // call by value
    int temp = a;
    a = b;
    b = temp;
}

void swapointer(int* a, int* b){  // call by reference using pointers
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapref(int &a, int &b){   // call by reference using C++ reference variables
    int temp = a;
    a = b;
    b = temp; 

}