#include <iostream>
using namespace std;

class complex
{

    int a, b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void getdata()
    {
        cout << "the number is: " << a << "+i" << b << endl;
    }

    void setdatabysum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
};
int main()
{
    complex o1, o2, o3;
    o1.setdata(2, 3);
    o1.getdata();

    o2.setdata(4, 5);
    o2.getdata();

    o3.setdatabysum(o1, o2);
    o3.getdata();
    return 0;
}