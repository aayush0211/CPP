#include<iostream>
using namespace std;

typedef struct{
    int book_id; 
    char title[100];
    float price;
}BOOK;

int main(){
    BOOK myBook[100];
    int n;
    cout<<"Enter no of record you want: \n";
    cin>>n;
    for(int i=0;i<n;i++){
    cout<<"Enter Book ID for BOOK : "<<i+1<<"\t";
    cin>>myBook[i].book_id;
    cout<<"\nEnter Book Title for BOOK: "<<i+1<<"\t";
    cin>>myBook[i].title;
    cout<<"\n Enter Price for BOOK: "<<i+1<<"\t";
    cin>>myBook[i].price;
    }

    cout<<"\nBook Record: ";
    
     for(int i=0;i<n;i++){
         cout << "Book " << i + 1 << ":\n";
    cout<<"\nBook ID: "<<myBook[i].book_id;
    cout<<"\nBook Title: "<<myBook[i].title;
    cout<<"\nPrice: "<<myBook[i].price;
}
    cout<<endl;
    return 0;
}