#include <iostream>
using namespace std;

class create_scadarecord
{
private:
    string key;
    string name;
    static int record;

public:
    create_scadarecord();
    void adddata();
    
    void showrecord();
    static void getrecordno(void)
    {
        cout << "record no: " << record << endl;
        record++;
    }
};

int create_scadarecord ::record = 0;

create_scadarecord ::create_scadarecord()
{
    key = "00000000";
    name = "xxxxxxxxx";
}

void create_scadarecord ::adddata()
{
    cout << "enter key and name" << endl;
    cin >> key >> name;
}

void create_scadarecord ::showrecord()
{
    cout << "------------------" << endl;
    cout << "key: " << key << endl;
    cout << "Name: " << name << endl;
    getrecordno();
    cout << "------------------" << endl;
}

int main()
{
    create_scadarecord o1, o2;
    // o1.showrecord();
    o1.adddata();
    o1.showrecord();
    o2.adddata();
    o2.showrecord();

    return 0;
}