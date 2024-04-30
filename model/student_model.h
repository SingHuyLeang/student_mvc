#include <iostream>
#include <cstring>
using namespace std;
class Student{
    private:
        int id;
        char name[20];
        char gender[10];
        double score;
    public:
        Student(){
            id = 0;
            strcpy(name,"unknow");
            strcpy(gender,"unknow");
            score = 0;
        }
        Student(int id,char *name,char *gender,double score){
            this->id = id;
            strcpy(this->name,name);
            strcpy(this->gender,gender);
            this->score = score;
        }
        void input(){
            cout << "Input id     : ";cin>>id;
            cout << "Input name   : ";cin>>name;
            cout << "Input gender : ";cin>>gender;
            cout << "Input score  : ";cin>>score;
        }
        void output() const {
            cout << "\t" << id
                 << "\t" << name
                 << "\t" << gender
                 << "\t" << score
                 << endl;
        }
        void header() const {
            cout << "\tID\tNAME\tGENDER\tSCORE" << endl;
        }
};