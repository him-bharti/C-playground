#include<iostream>
using namespace std;

class student{
    private:
        int roll_number;
    public:
        void set_roll(int num){
            roll_number = num;
        }
        int get_roll(){
            cout<<"the roll no. is: "<<roll_number<<endl;
            return roll_number;
        }

};

class exam_score: virtual public student{
    public:
        float physics, maths;

        void set_marks(float num1, float num2){
            physics = num1;
            maths = num2;
            
        }

        float get_marks(){
            cout<<"the total exam marks is: "<<(physics + maths)<<endl;
            return (physics + maths);
        }
    

};

class games_score: virtual public student{

    public:
        float cricket, football;

        void set_marks(float num1, float num2){
            cricket = num1;
            football = num2;
            
        }

        float get_marks(){
            cout<<"the total games marks is: "<<(cricket + football)<<endl;
            return (cricket + football);
        }
};

class score : virtual public exam_score, virtual public games_score{
    public:
        void display_score(){
            cout<<"total score is: "<<exam_score::get_marks() + games_score::get_marks()
            <<endl;
        }


};

int main(){

    score obj;
    obj.set_roll(10); // to resolve ambiguity of same method being inherited twice use virtual
    obj.exam_score::set_marks(91.0,95.0);
    obj.games_score::set_marks(99.0,96.0);
    obj.display_score();
    return 0;
}