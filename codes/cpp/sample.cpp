#include <iostream>
using namespace std;
int fib(int n, int m, int num)
{
    cout << "\n factorial called ";
    int i = 0;
    int a;
    while (i <num)
    {
        a = n + m;
        cout << a << " ";
        n = m;
        m = a;
        i++;
    }
}
int main()
{
    int n;
    int  m;
    int num ;
    cout<<"enter n";
    cin>>n;
    cout<<"enter m";
    cin>>m;
    cout<<"number to printed";
    cin>>num;

    fib(n, m, num);
    
    return 0;
}