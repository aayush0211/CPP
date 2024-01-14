//

#include<iostream>
using namespace std;

class date{
    int day;
    int month;
    int year;
    public:
        void setInput(){
            cout<<"Enter Day: ";
            cin>>day;
            cout<<"\nEnter Month: ";
            cin>>month;
            cout<<"\nEnter year: ";
            cin>>year;
        }
        void getOutput(){
            cout<<"Date: \n"<<endl;
            cout<<day<<"\\"<<month<<"\\"<<year<<endl;
        }
        void operator==(date d2){
            if((day==d2.day)&&(month==d2.month)&&(year==d2.year)){
                cout<<"Both are equal \n";
            }
            else cout<<"Different dates \n";
        }
        void operator>(date d2){
            if((year>d2.year))
                cout<<"Date 1 is greater \n";
                else if((month>d2.month))
                cout<<"Date 1 is greater \n";
                else if((day>d2.day)) 
                cout<<"Date 1 is greater \n";
                 else if((day==d2.day)&&(month==d2.month)&&(year==d2.year))
                    this->operator==(d2);
                else  
                cout<<"Date 2 is greater \n";  
        }

};


int main(){
    date d1, d2;
    d1.setInput();\
    cout<<"Date 1 is .... \n";
    d1.getOutput();

    d2.setInput();
    cout<<"Date 2 is .... \n";
    d2.getOutput();

    d1.operator>(d2);

    return 0;
}