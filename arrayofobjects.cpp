#include <iostream>
using namespace std;

class Employee
{
    int id;
    string name;

public:
    void setdata()
    {
        cout << "enter the employee id and name" << endl;
        cin >> id;
        cin >> name;
    }
    void getdata()
    {
        cout << "the id of the employee is: " << id << endl;
        cout << "the name of the employee is: " << name << endl;
    }
};

int main()
{
    Employee emp[4];
    for (int i = 0; i < 4; i++)
    {
        emp[i].setdata();
        emp[i].getdata();
    }

    return 0;
}