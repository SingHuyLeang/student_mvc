#include "../controller/student_controller.h"
#include <conio.h>
int main(){
    int n,op;
    StudentController controller;
    Student model;
    do {
        cout << "1. Add Student\n"
             << "2. Display Data\n"
             << "3. Update Data\n"
             << "5. Delete Data\n"
             << "Please choose option : ";
        cin >> op;
        switch (op) {
            case 1:{
                cout << "Enter Student No : ";cin >> n;
                for (int i = 0; i < n; i++) {
                    model.input();
                    controller.add(model);
                    controller.close();
                }
            }break;
            case 2:{
                controller.get();
                controller.close();
            };
        }
        cout << "Press enter to continue ...\n";
    } while (getch()==13); // Enter to next...
    
}



