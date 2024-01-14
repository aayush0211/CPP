#include<iostream>
#include<string>
using namespace std;
struct Date
{
    int year;
    int month;
    int day;
};

class employee
{   int empl_id;
    string name;
    Date date;
public :
    employee()
    {
        cout<<"\n enter empl_id :- ";
        cin>>empl_id;
        cout<<"\n enter employee name :- ";
        cin.ignore();
        getline(cin,name);
        cout<<"\n enter date of birth :- \n enter year :- ";
        cin>>this->date.year;
        cout<<"\n enter month :- ";
        cin>>this->date.month;
        cout<<"\n enter day :- ";
        cin>>this->date.day;
    }
    void display()
    {
        cout<<"\n employee details as :- \n empl_id :- "<<empl_id<<"\n employee name :- "<<name<<"\t\t Date of Birth :- ";
        cout<<this->date.day<<"\\"<<this->date.month<<"\\"<<this->date.year;

    }
    ~employee()
    {
        cout<<"\n employee memory free ";
    }

};
class WageEmployee : public employee
{   protected :
    int Number_of_hours_worked;
    double Rate_per_hour;
public :
    WageEmployee():employee()
    {
        cout<<"\n enter number of hours worked :- ";
        cin>>Number_of_hours_worked;
        cout<<"\n enter Rate per hour :- ";
        cin>>Rate_per_hour;
    }
    ~WageEmployee()
    {
        cout<<"\n Wage_emp memory free !";
    }
    void display()
    {
        cout<<"\n number of hour worked :- "<<Number_of_hours_worked;
        cout<<"\n Rate per hour :- "<<Rate_per_hour;
       // cout<<"\n Salary :- "<<Number_of_hours_worked*Rate_per_hour;

    }
};
class SalesPerson : public WageEmployee
{
    int Number_of_items_sold;
    double Commission_per_item;
public :
    SalesPerson():WageEmployee()
    {
        cout<<"\n enter Number_of_items_sold :- ";
        cin>>Number_of_items_sold;
        cout<<"\n enter Commission_per_item :- ";
        cin>>Commission_per_item;
    }
    ~SalesPerson()
    {
        cout<<"\n Sales_emp memory free !";
    }
    void display()
    {
        cout<<"\n Number_of_items_sold :- "<<Number_of_items_sold;
        cout<<"\n Commission_per_item :- "<<Commission_per_item;
        cout<<"\n Salary :- "<<(Number_of_hours_worked*Rate_per_hour+Number_of_items_sold*Commission_per_item);

    }
};
int main()
{   
    //WageEmployee W1;
    SalesPerson S1;

    cout<<"\n let's see function overriding when call to base class's display() but call to derived display() :- ";
 //   W1.display();
    S1.display();
    cout<<"\n call with scope resolution :- ";
  //  W1.employee::display();
  //  W1.display();
    S1.employee::display();
    S1.WageEmployee::display();
    S1.display();

    employee *p=&S1;
    p->display();
 return 0;
}