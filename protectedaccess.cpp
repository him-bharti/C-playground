#include <iostream>
using namespace std;

class base
{
    public:
        int e;

    protected:
        int a;

    private:
        int b;
};

class derived : public base
{
    protected:
        int c;

    public:
        int d;
};

int main()
{
    base b;
    derived d;
    cout << d.d << endl;       // public members can be accessed
    // cout << d.c << endl;    *protected members cannot be accessed*
    // cout << d.a << endl;     protected members are not inherited publicly
    cout << d.e << endl;       // public members are inherited publicly
    return 0;
}