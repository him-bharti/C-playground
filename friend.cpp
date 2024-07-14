#include<iostream>
using namespace std;

class employee{
    
    string name;
    int id;
    void checkdetails(){
        if (name.empty() or id == 0){
            cout<<"Invalid details entered"<<endl;
            exit(0);
        }
    }

    friend void getdetails();   // can be declared anywhere in a class
    
    public:
        void setname();
        void setid();
        void getdetails();
};

void employee :: setname(){
    cout<<"enter the name of the employee: "<<endl;
    getline(cin, name);
}

void employee :: setid(){
    cout<<"enter the id of this employee: "<<endl;
    cin>>id;
}

void employee :: getdetails(){
    checkdetails();     // can access private members bcoz it is friend function
    cout<<"the name of the employee is: "<<name <<" and the id is: "<<id<<endl;

}

int main(){
    employee e1,e2,e3;
    
    e1.setname();
    e1.setid();
    e1.getdetails();  // able to access get details bcoz it is declared friend function

    e2.setname();
    e2.setid();
    e2.getdetails();

    e3.setname();
    e3.setid();
    e3.getdetails();

    return 0;
}