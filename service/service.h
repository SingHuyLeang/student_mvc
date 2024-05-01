#include <iostream>
#include <fstream>
#include "../model/student_model.h"
using namespace std;
class Service{
    public:
        fstream file,temp;
        void init(string mode){
            if (mode == "w"){
                file.open("student_data.txt",ios::app);
            }else if (mode == "r") { 
                file.open("student_data.txt",ios::in);
            }else if (mode == "u") { 
                file.open("student_data.txt",ios::in);
                temp.open("temp.txt",ios::out);
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
        void closeAll(){
            file.close();
            temp.close();

            remove("student_data.txt");
            rename("temp.txt","student_data.txt");
        }
};