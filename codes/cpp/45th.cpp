#include<iostream>
using namespace std;
class Matrix {
    int **arr;
    int row_size;
    int column_size;
public:
    Matrix():row_size(3),column_size(3)
    { memory_allocation();
        for(int i=0; i<row_size;i++)
        {
            for(int j=0; j<column_size;j++)
                arr[i][j]=0;
        }
    }
    Matrix(int n,int m):row_size(n),column_size(m)
    { 
            memory_allocation();
            for(int i=0; i<row_size;i++)
        {
            for(int j=0; j<column_size;j++)
                arr[i][j]=0;
        }
     }
     Matrix(Matrix &obj):row_size(obj.row_size),column_size(obj.column_size)
     {
        memory_allocation();
        for(int i=0;i<row_size;i++)
        {
            for(int j=0;j<column_size;j++)
            arr[i][j]=obj.arr[i][j];
        }
     }
     void memory_allocation();
     ~Matrix()
     {
        for(int i=0;i<row_size;i++)
        delete[] arr[i];
        delete[] arr;
        cout<<"\n memory is free successfully";
     }
     Matrix operator+(Matrix obj);
     void operator!();
     friend istream& operator>>(istream& in,Matrix &obj);
     friend ostream& operator<<(ostream& out,Matrix &obj);



};
istream& operator>>(istream& in,Matrix &obj)
{
    cout<<"\n enter row size :- ";
    in>>obj.row_size;
    cout<<"\n enter column size :- ";
    in>>obj.column_size;
    obj.memory_allocation();
    for(int i=0;i<obj.row_size;i++)
    { cout<<"\n enter "<<i+1<<" row elements :- ";
    for(int j=0;j<obj.column_size;j++)
    {  cout<<"enter "<<j+1<<" element :- ";
        in>>obj.arr[i][j];
    }
    }
}
ostream& operator<<(ostream& out ,Matrix &obj)
{
    out<<"\n the Matrix as :- ";
    for(int i=0;i<obj.row_size;i++)
    {
        out<<"\n elements of "<<i+1<<" row :- ";
        for(int j=0;j<obj.column_size;j++)
        {
            out<<" "<<obj.arr[i][j]<<" ";
        }
    }
}
Matrix Matrix::operator+(Matrix obj)
{   Matrix temp(obj.row_size,obj.column_size);
    if(row_size!=obj.row_size || column_size!=obj.column_size) {cout<<"\n Matrix addititon can't be perform "; return *this;}
    
    for(int i=0;i<row_size;i++)
    {
        for(int j=0;j<column_size;j++)
        temp.arr[i][j]=arr[i][j]+obj.arr[i][j];
    }
    return temp;
}
void Matrix::operator!()
{
    int temp;
    for(int i=0;i<row_size;i++)
    {
        for(int j=i;j<column_size;j++)
        {
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    return;
}


void Matrix::memory_allocation()
{
    arr=new int* [row_size];
    for(int i=0;i<row_size;i++)
    {
        arr[i]=new int[column_size];
    }
}


int main()
{
    Matrix M1,M2(4,4),M3,M4;
    cout<<"\n enter 2 matrix for addition :- "<<" \n 1st matrix :- ";
    cin>>M3;
    cout<<"\n enter 2nd matrix :- ";
    cin>>M4;
    Matrix M5=M4+M3;
    cout<<"\n the resultend matrix is :- "<<M5;

    cout<<"\n the output of default matrix :- ";
    cout<<M1;
    cout<<"\n the output of parameteraized matrix :- ";
    cout<<M2;
    cout<<"\n the output of transpose matrix for 1th one :-   ";
    !M3;
    cout<<M3;
 return 0;
}