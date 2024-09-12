#include<iostream>
using namespace std;

typedef struct game
{
    /* data */
    int id; // memory 4 byte
    float rating; // memory 4 byte so total = 4+4 =8 bytes

}namechangevariable;

// typedef is a way of renaming the new user-defined datatype like: int a 
// for better memory management use union bcoz it uses only 1 parameter at a time
union play
{
    /* data */
    int id;  // memory 4 bytes
    float rating; // memory 4 bytes so total will be only 4 bytes,
                  // it basically allocates max memory

};

int main(){
    namechangevariable godofwar;
    godofwar.id = 1;
    godofwar.rating = 4.4;
    cout<<godofwar.rating<<endl;
    
    play godofwar1;
    godofwar1.id = 4;
    cout<<godofwar1.id<<endl;
    godofwar1.rating = 4.4;
    cout<<godofwar1.rating<<endl;
    cout<<godofwar1.id; // should print garbage value

    enum food {breakfast,lunch,dinner};
    food meal = breakfast;
    cout<<meal;

    return 0;
}