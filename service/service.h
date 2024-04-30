#include <iostream>
#include <fstream>
#include "../model/student_model.h"
using namespace std;
class Service{
    private:
        fstream file;
    public:
        void init(string mode){
            if (mode == "w"){
                file.open("student_data.txt",ios::app);
            }else if (mode == "r") { 
                file.open("student_data.txt",ios::in);
            } else {
                cerr << "Error! :[Invalid] mode file"<< endl;
            }
        }
        void post(Student data){
            init("w");
            file.write((char*)&data,sizeof(data));
        }
        void get(){
            Student data;
            init("r");
            data.header();
            while (file.read((char*)&data,sizeof(data))){
                data.output();
            }
            
        }
        void close(){
            file.close();
        }
};