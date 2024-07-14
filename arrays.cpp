#include<iostream>
using namespace std;

int main(){
    // array and pointers in C++
    int marks[4] = {21,23,67,99};
    int* p = marks; // no need to put address of operator(&) in arrays
    for(int i =0; i<4; i++){
        cout<<"marks of "<<i<<" "<<*(p+i)<<endl;
    }

    return 0;
}
