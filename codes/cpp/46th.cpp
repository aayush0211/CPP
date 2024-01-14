#include<iostream>
#include<string>
using namespace std;
class Date {
    int year;
    int month;
    int day;
public :
   // Date()
    // {
  

    // }
   // Date (int y,int m,int d):year(y),month(m),day(d)
 //   { }
    void takedate()
    {
         cout<<"\n enter date of birth :- ";
        cout<<"\n enter year :- ";
        cin>>year;
        cout<<"\n enter month :- ";
        cin>>month;
        cout<<"\n enter day :- ";
        cin>>day;
    }
    void acceptdate(int y,int m,int d)
    {
        year=y; month=m; day=d;
    }
     void display()
     {
        cout<<"\n Date of Birth :- "<<day<<"\\"<<month<<"\\"<<day;
     }

};
class student {
    int roll_no;
    char name[40];
    Date date;
    static int count;
public :
        student()
        {
            cout<<"\n enter your name :- ";
            count++;
            roll_no=count;
            cin>>name;
            date.takedate();
            
        }
        student(char *ch,int y,int m,int d)
        {   int i;  count++;
            for( i=0;ch[i]!='\0';i++)
            {
                name[i]=ch[i];
            }
            name[i]='\0';
            date.acceptdate(y,m,d);
            roll_no=count;
        }
        void display()
        {
            cout<<"\n student information as :- ";
            cout<<endl<<" name :- "<<name<<"\t\t roll no :- "<<roll_no;
            date.display();
        }


};
int main()
{       student S1;
    S1.display();
   // S2.display();
 return 0;
}