// Write a program to accept marks of five subjects from the user and calculate their average. Use
// implicit and explicit type conversion.
#include<iostream>
using namespace std;
float cal(int num[]){

    float avg; 
    int total=0;
    for(int i=0;i<=4;i++){

        total += num[i];
         
    }
    avg = (float)total/5;

    return avg;
}

int main(){

    int marks[5];
    float avg;
    
    for(int i=0; i<5; i++){
    do{
        cout<<"enter marks of sub"<<i+1<<" : ";
        cin>>marks[i];
    }while(marks[i]<0 || marks[i]>100);
    }

    avg=cal(marks);
    cout<<"avg of 5 subject is : "<<avg;
    return 0;
}