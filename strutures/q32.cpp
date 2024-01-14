#include<iostream>
using namespace std;

typedef struct{
    int book_id; 
    char title[100];
    float price;
}BOOK;

int main(){
    BOOK myBook;
    cout<<"Enter Book ID : ";
    cin>>myBook.book_id;
    cout<<"\nEnter Book Title: ";
    cin>>myBook.title;
    cout<<"\n Enter Price: ";
    cin>>myBook.price;

    cout<<"\nBook Record: ";
    cout<<"\nBook ID: "<<myBook.book_id;
    cout<<"\nBook Title: "<<myBook.title;
    cout<<"\nPrice: "<<myBook.price;
    cout<<endl;
    return 0;
}