#include<iostream>
using namespace std;

class Student{
    int roll;
    char name[30];
    Student() : roll(0),name(0){};
    Student(int roll, char name) this->roll = roll;
    this->name = name;
};

class Date{
    int date;
    string month;
    int year;
};