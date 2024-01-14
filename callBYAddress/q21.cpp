//Menu driven prog to allows the user to select either  CIRCLE Or RECTANGLE

#include<iostream>
// #define 3.14;
using namespace std;

void areaCircum(){
    double radius;
    cout<<"Enter Radius of the circle: ";
    cin>>radius;
    double area = 3.14*radius*radius;
     double circum = 2*3.14*radius;
    cout<<"\nArea of circle is: ";
    cout<<area;
    cout<<"\nCircumference of the circle is: "<<circum<<endl;
}

void areaPeri(){
    double length,breadth;
    cout<<"Enter Length of a rectangle: ";
    cin>>length;
    cout<<"\nEnter Breadth of a rectangle: ";
    cin>>breadth;

    double area = length*breadth;
    double peri = 2*(length+breadth);
    cout<<"\nArea of Rectangle is: "<<area;
    cout<<"\nPerimeter of Rectangle is: "<<peri;

    
}

int main(){
    int choice;
    do{ 
        cout<<"\n1. Circle"
                "\n2.Rectangle"
                "\n3.Exit.";
          cout<<"\nSelect your choice: ";
        cin>>choice;
        switch (choice)
        {   
            case 1:areaCircum() ;
                break;
            case 2:areaPeri();
                break;
            case 3:exit(0);
                break;
        }
    }while(true);      
    cout<<endl;
    return 0;
}

