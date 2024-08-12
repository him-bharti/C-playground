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
    int n;
    cout << "Enter the no. of records to be added in database"<<endl;
    cin>>n;
    create_scadarecord o[n];
    // o1.showrecord();
    for (int i = 0; i < n; i++)
    {
        o[i].adddata();
        o[i].showrecord();
    }

    return 0;
}