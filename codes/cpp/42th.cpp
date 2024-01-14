#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
class Employee
{   
    int emp_id;
    char emp_name[20];
    double salary;
public :
    Employee();
    Employee(int,char*,double);
    void accept();
    void display();
    bool operator==(int i);
    ~Employee() {
        cout<<"\n memory release :- ";
    }
};
bool Employee::operator==(int i)
{
    if(emp_id==i) return true;
    return false;
}
Employee::Employee()
{   cout<<"\n default ";
    emp_id=0;
    emp_name[0]='\0';
    salary=0;
}
Employee::Employee(int n,char *ch,double sal)
{   cout<<"\n parametraized constructor called ";
    emp_id=n;
    for(int i=0;ch[i]!='\0';i++)
    {
        emp_name[i]=ch[i];
    }
    salary=sal;
}
void Employee::accept()
{
    cout<<"\n enter emp_id :- ";
    cin>>emp_id;
    cout<<"\n enter employee name :- ";
    cin>>emp_name;
    cout<<"\n salary :- ";
    cin>>salary;
}
void Employee::display()
{
    cout<<"\n display data of employee :- "<<"\n emp_id :- "<<emp_id<<"\n emp_name :- "<<emp_name<<"\n salary :- "<<salary;
}
Employee* memoryAllocation(int size)
{
    Employee *p=(Employee *)malloc(size*sizeof(Employee));
    return p;
}
int main()
{
    int i; Employee *p;
    while(true)
    {
        cout<<"\n chooes entire option :- ";
        cout<<"\n 1) Insert record into an array.";
        cout<<"\n 2) Update information of specific employee on the basis of emp_id";
        cout<<"\n 3) Display all record ";
        cout<<"\n 4) exit";
        cout<<"\n enter your option :- ";
        cin>>i;

        switch(i)
        {
            case 1: cout<<"enter number of employee whoes record want to insert :- ";
                    int n; cin>>n;
                    p=memoryAllocation(n);
                    for(int j=0;j<n;j++)
                    {
                        cout<<"\n enter "<<j+1<<" employee data ";
                        p[j].accept();
                       // p[i].display();
                    }
                    break;
            case 2: cout<<"\n enter employee id :- ";
                    int id; cin>>id;
                    for(int j=0;j<n;j++)
                    {
                        if(p[j]==id)
                        p[j].accept();
                    }
                    cout<<"\n updated record :- ";
                     for(int j=0;j<n;j++)
                    {
                        cout<<"\n enter "<<j+1<<" employee data ";
                       // p[i].accept();
                        p[j].display();
                    }
                    break;
            case 3: cout<<"\n all records as :- ";
                     for(int j=0;j<n;j++)
                    {
                        cout<<"\n enter "<<j+1<<" employee data ";
                       // p[i].accept();
                       p[j].display();
                    }
                    break;
            case 4: cout<<"\n GoodBye !";
                    return 0;
            default : cout<<"\n enter correct option !";
        }
    }
 return 0;
}