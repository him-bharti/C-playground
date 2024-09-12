#include<iostream>
#include<cmath>
using namespace std;

class simple_calc{
    protected:
        int a,b;
    public:
        void set(int num1, int num2){
            a = num1;
            b = num2;

        }
        void calculate(){
            cout<<"addition: "<<a+b<<endl;
            cout<<"subtraction: "<<a-b<<endl;
            cout<<"multiplication: "<<a*b<<endl;
            cout<<"division: "<<a/b<<endl;


        }



};

class scientific_calc{
    protected:
        int a,b;
    public:
        void set(int num1, int num2){
            a = num1;
            b = num2;

        }
        void calculate(){
            cout<<"square root: "<<sqrt(a)<<endl;
            cout<<"a to the power b: "<<(pow(a,b))<<endl;
            cout<<"logarithm: "<<log(a)<<endl;


        }

};

class Hybrid_calc: public simple_calc, public scientific_calc{};



int main(){
    simple_calc obj1;
    obj1.set(23,21);
    obj1.calculate();
    scientific_calc obj2;
    obj2.set(23,21);
    obj2.calculate();

    Hybrid_calc obj;
    obj.simple_calc::set(21,21); // to avoid ambiguity in set function of both class scope resolution operator is used or just change the name of both functions.
    obj.simple_calc::calculate(); 

    return 0;
}