/*
Q1.Sunbeam have multiple courses. Create an Application to handle the admission process using c++.
Create a class Student with data members name, rollno, mobile.
Create a class Course with data members course_name, fees;
Student can register multiple courses so have proper relationship between student and courses.
A student can take as many courses he want(use of STL is allowed)
Write a menu driven code which will have below menus:
1.Register student 
2.Take course 
3.Display specific student's taken courses
4.display all students and their courses registered.
Also all registered students need to be stored inside a vector.

write a user-friendly understandable perfect code please.




*/
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

class Courses{
    string course_name[6];
    int fees=1000;
    int no_of_course;
    public:
        void set_courses(){
            do{
                cout<<"\nCourse Details are following: ";
                cout<<"\n1)DAC\n2)AI\n3)DITTIS\n4)DESD\n5)DML\n6)DBDA";

                cout<<"\nEnter no of course you want to take ";
                cin>>no_of_course;
            }while(no_of_course<1 || no_of_course>6);
            for(int i=0;i<no_of_course;i++){
                cout<<"Enter name of course "<<i+1<<" "<<endl;
                cin>>course_name[i];
            }
        }
            void display_course(){
                cout<<"\nYour course details \n";
                for(int i=0;i<no_of_course;i++){
                    cout<<course_name[i];
                    cout<<endl;
                }
                cout<<"Your Total fees : "<<fees*no_of_course;
                cout<<endl;
           }
     
};
class Student:public Courses{
    static int roll;
        string name;
        double mobile;
    public:
        // Student():roll(0),name(0),mobile(0){}

        void setInfo(){
            cout<<"\nEnter Student Name: ";
            cin>>name;
            cout<<"\nEnter mobile numner: ";
            cin>>mobile;
        }
        void disp(){
            cout<<"\t\tSTUDENT DETAILS.........: \n";
            cout<<"Name\t\t";
            cout<<"Roll\t\t";
            cout<<"mob\n";
            cout<<name<<"\t\t"<<roll<<"\t\t"<<mobile<<endl;
            roll++;
        }

};

int Student::roll = 1;

int main(){
    Student s1[3];
    int i=0;

    do{
    cout<<"\n1.Registration ";
    s1[i].setInfo();
    cout<<"\n2.Take Course ";
    s1[i].set_courses();
    cout<<"\n3.Student's Taken Courses ";
    s1[i].display_course();
    i++;
}while(i<3);
    cout<<"\nAll Student's Detsils: \n";
    for(int j=0;j<3;j++){
    cout << endl;
    cout << j + 1 << " Student's info: " << endl;
    s1[j].disp();
    cout << endl;
    s1[j].display_course();
    }
    cout<<endl;
    return 0;
}

