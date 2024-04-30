#include "../service/service.h"
class StudentController{
    Student model;
    Service service;
    public:
        void add(Student student){
            service.post(student);
        }
        void update(){

        }
        void remove(){

        }
        void get(){
            service.get();
        }
        void close(){
            service.close();
        }
};