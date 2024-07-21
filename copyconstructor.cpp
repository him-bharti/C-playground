#include <iostream>
using namespace std;

class helloworld
{
private:
    int a;

public:
    helloworld(){
        a = 0;
    };
    helloworld(helloworld &h1)
    {
        cout << "copy constructor invoked" << endl;
        a = h1.a;
    }

}; 

int main()
{
    helloworld h1;
    helloworld h2 = h1; // copy constructor invoked
    return 0;
}