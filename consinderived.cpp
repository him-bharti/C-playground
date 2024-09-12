#include<iostream>
using namespace std;

class base1 {
    int data1;
    public:
    // constructor for base1
        base1(int data=10){
            data1 = data;
            cout<<"base1 constructor called"<<endl;
        }

        void printdata1(){
            cout<<"the value of data1 is: "<<data1<<endl;

        }

};

class base2{
    int data2;
    public:
    // constructor for base2
        base2(int data=20){
            data2 = data;
            cout<<"base2 constructor called"<<endl;
        }

        void printdata2(){
            cout<<"the value of data2 is: "<<data2<<endl;

        }
};


class derived: public base2, public base1{ // base2 constructor called 1st.
    int data3,data4;
    public:
        derived(int a=10,int b=20, int c =30 ,int d= 40):base1(a),base2(b){
            data3 = c;
            data4 = d;
        }
        void printdataderived(){

            cout<<"the value of data3 and data4 is: "<<data3<<","<<data4<<endl;
        }

};

int main(){
    
    derived obj(43,31);
    obj.printdata1();
    obj.printdata2();
    obj.printdataderived();

    return 0;
}