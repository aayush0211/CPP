#include<iostream>
using namespace std;
class Account
{   
    int balance;
public :
    Account()
    {
        cout<<"\n object created !";
    }
    void deposit()
    {   int temp;
        cout<<"\n enter the amount to be deposit :- ";
        cin>>temp;
        balance=balance+temp;
        cout<<"\n updated balance :- "<<balance;
        this->balance=balance;
        balance=temp;
    }
    void withdraw()
    {
        int temp;
        cout<<"\n enter amonut to be withdraw : ";
        cin>>temp;
        if(temp>15000) throw 1;
        if(temp<balance) throw 0;
        balance=balance-temp;
        cout<<"\n updated balance is : "<<balance;
    }
};
int main()
{   
    Account obj;
    try{
    obj.deposit();
    obj.withdraw();
    }
    catch(int i)
    {
        if(i==0) cout<<"\n unsufficent balance !";
        else cout<<"\n you are withdrawl over the limit !(limit is 15000)";
    }
 return 0;
}