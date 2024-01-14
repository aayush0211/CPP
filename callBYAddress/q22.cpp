// Prog to accept date,month,year from the user in a function called getDate(), and print that date in main() in dd/mm/yy.

#include<iostream>
using namespace std;

void getDate(){
    int date;
    int month;
    int year;

    cout<<"Enter date: ";
    cin>>date;
    cout<<"\nEnter Month: ";
    cin>>month;
    cout<<"\nEnter Year: ";
    cin>>year;

    cout<<"\nDate is : "<<date<<"/"<<month<<"/"<<year;
}

int main(){
    getDate();
    cout<<endl;
    return 0;
}

