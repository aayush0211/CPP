#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;
class course{
    string course_name[6];
    int fees=1000;
    int n;    // fees of each course is 1000
    public:
      void set_course(){
        do{
        cout<<"course details are following \n";
        cout<<"1) DAC\n2) AI\n3) DBDA\n4) DESD\n5) DITTIS\n6) DML\n";   
            
            cout<<"enter number of course you want: ";
            cin>>n;
        }while(n<1 || n>6);
        for(int i=0; i<n;i++){
            cout<<"enter name of "<<i+1<<" course ";
            cin>>course_name[i];
        }
        
      }

      void display_course(){
        cout<<"Your course details  :"<<endl;
        for(int i=0; i<n;i++){
            cout<<course_name[i]<<endl;
        }
        cout<<"Your total fees   :    "<<fees*n;
      }
};

class student: public course{
    string name;
    double mob;
    static int roll;

    public:
      void setInfo(){
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter mob no. = ";
        cin>>mob;
      }
      void disp_info(){
        cout<<"student details.....: "<<endl;
        cout<<"Name is: ";
        cout<<name<<endl;
        cout<<"Roll is :   ";
        cout<<roll<<endl;
        roll++;
        cout<<"mob ..:  "<<mob;
      }
};
int student::roll = 1;


int main(){
    student s1[3];
    int i=0;
    do{
        // register student;
        cout<<"\n1.Register \n";
        s1[i].setInfo();
        cout<<"2.Take Course \n";
        s1[i].set_course();
        cout<<"3.Student's taken course \n";
        s1[i].display_course();
        i++;
    }while(i<3);
    cout<<"\nAll Student details: \n";
    for(int j=0;j<3;j++){
        cout<<j+1<<" \nStudent info: \n"<<endl;
        s1[j].disp_info();
        cout<<endl;
        s1[j].display_course();
    }
    return 0;
}