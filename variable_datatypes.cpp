#include <iostream>
using namespace std;

int a=4;
void func(){
    int a=5;
    cout<<a;
}

int main(){
    cout<<a; //global variable output
    func(); // local variable in func() as output
    int a = 67;
    cout<<a; // local variable in main() as output
    return 0;
}


