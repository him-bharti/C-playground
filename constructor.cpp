#include <iostream>
using namespace std;

class complex
{
private:
    int a, b;

public:
    void setnumber(int c, int d);
    void display();

    complex(); // constructor, it doesn't have any return type, must be declared in public
};

complex ::complex()   // used to set initial values of variables
{
    a = 0;
    b = 0;
}

void complex ::setnumber(int c, int d)
{
    a = c;
    b = d;
}

void complex ::display()
{
    cout << "the complex number is: " << a << " + i"<< b << endl;
}

int main()
{

    complex c;
    c.display(); // default 0 + i0 bcoz of constructor

    c.setnumber(10, 5);
    c.display(); // default value override

    return 0;
}