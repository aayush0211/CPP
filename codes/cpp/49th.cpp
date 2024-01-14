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
class WageEmployee :virtual public employee
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
class Manager:virtual public employee
{
    int basic_salary;
    int number_of_subordinate;
public :
    Manager()
    {
        cout<<"\n Manager constructor invoke !";
        cout<<"\n enter basic salary :- ";
        cin>>basic_salary;
        cout<<"\n enter number of subordinate :- ";
        cin>>number_of_subordinate;
    }
    void dispaly()
    {
        cout<<"\n Manager details as :- \nBasic Salary :- "<<basic_salary<<"\t\t number of sub-ordinate :- "<<number_of_subordinate;

    }
    ~Manager()
    {
        cout<<"\n Manager destructor invoke !";
    }
};
class SalesManager:public Manager,public SalesPerson
{
public :
    SalesManager():employee()
    {
        cout<<"\n SalesManager constructor invoke !";
    }
    ~SalesManager()
    {
        cout<<"\n Salesmanager destructor invoke !";
    }
    void display()
    {
        cout<<"\n SalesManager display function invoke !";
        cout<<"\n SalesManager details as follow :- ";
        this->employee::display();
        this->WageEmployee::display();
        this->SalesPerson::display();
        this->Manager::display();

    }
};
int main()
{   
    SalesManager obj;
    obj.display();
 return 0;
}