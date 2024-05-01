#include "../service/service.h"
class StudentController{
    Student model,temp;
    Service service;
    public:
        void add(Student student){
            service.post(student);
        }
        void update(int id){
            service.init("u");
            while(service.file.read((char*)&model,sizeof(model))){
                if (id == model.getId()){
                    temp.input();
                    service.temp.write((char*)&temp,sizeof(temp));
                } else {
                    service.temp.write((char*)&model,sizeof(model));
                }
            }
            service.closeAll();
        }
        void remove(int id){
            service.init("u");
            while(service.file.read((char*)&model,sizeof(model))){
                if (id == model.getId()){
                    
                } else {
                    service.temp.write((char*)&model,sizeof(model));
                }
            }
            service.closeAll();
        }
        void get(){
            service.get();
        }
        void close(){
            service.close();
        }
};