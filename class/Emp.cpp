#include<iostream>
#include<cstring>
using namespace std;

class Employee{
    int Emp_id;
    char Emp_name[20];
    public:
        Employee() : Emp_id(0){
            strcpy(Emp_name, " ");
        }

        Employee(int id, const char name[]):Emp_id(id){
            strcpy(Emp_name, name);
        }
        void setEmp(int id,const char name[]){
            Emp_id = id;
            strcpy(Emp_name, name);
        }
        int getEmpID(){
            return Emp_id;
        }
        const char* getEmpname(){
            return Emp_name;
        }
        void Disp(){
            cout << "\nEmp id id: " << Emp_id << " and \nEmp name is : " << Emp_name << endl;
        }
};

int main(){
        Employee employee1;
        employee1.setEmp(101,"Aayush");
        cout << "\nEmploye id of Employee 1 is : " << employee1.getEmpID()<<endl;
        cout << "Employe name of Employee 1 is : " << employee1.getEmpname() << endl;
        employee1.Disp();

        Employee employee2(102, "Rohan");
        cout << "\nEmploye id of Employee 2 is : " << employee2.getEmpID()<<endl;
        cout << "Employe name of Employee 2 is : " << employee2.getEmpname() << endl;
        employee2.Disp();
        cout << endl;
        return 0;
}