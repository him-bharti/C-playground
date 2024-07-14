#include <iostream>
using namespace std;

class binary
{
private: // ---> by default everything is private in C++
    string s;
    void check_input(void);

public:
    void take_input(void);
};

void binary::take_input(void)
{
    cout << "enter the binary number" << endl;
    cin >> s;
    check_input(); // ------> nesting of member function
}

void binary::check_input(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format" << endl;
            exit(0);
        }
    }

    cout << "input taken" << endl;
}

int main()
{
    binary b;
    b.take_input();

    return 0;
}