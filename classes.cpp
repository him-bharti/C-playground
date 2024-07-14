#include<iostream>
using namespace std;


class Employee {
    public:
        int d,e;
        void setdata(int a, int b, int c);
        void getdata();

    private:
        int a,b,c;
};

void Employee :: setdata(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;

}

void Employee :: getdata(){
    cout<<"value of a is: "<<a<<endl;
    cout<<"value of b is: "<<b<<endl;
    cout<<"value of c is: "<<c<<endl;
    cout<<"value of d is: "<<d<<endl;
    cout<<"value of e is: "<<e<<endl;
}
int main(){
    
    Employee himanshu;
    himanshu.d = 12;
    himanshu.e = 16;
    himanshu.setdata(23,34,78); // ---> sets the value for a,b,c which cannot be set directly
                                // but can be accessed by a member of a class
    // himanshu.a = 23; ---> throws error as it is a private member of class
    // himanshu.b = 27; ---> throws error as it is a private member of class
    himanshu.getdata();
    return 0;
}