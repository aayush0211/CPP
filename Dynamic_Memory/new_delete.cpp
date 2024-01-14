#include<iostream>
using namespace std;
int main(){
    int x = 42;
    int *p = &x;
    cout << *p << " " << p << " " << x << " " << &x <<" "<<&p << endl;
    int value = *p;
    cout << value;
    cout << endl;
    return 0;
} 

// int main(){
//     int n,i;
//     int *p;
//     cout<<"How many numbers you want to take? \n";
//     cin >> n;
//     p= new (nothrow) int[n];
//     if(p==nullptr){
//         cout << "No allocation happened \n";
//     }
//     else{
//         for (i = 0; i < n; i++){
//             cout << "Enter Number: ";
//             cin>>p[i];
//         }
//         cout << "\nYou have entered :";
//         for (i = 0; i < n;i++){
//             cout << p[i] << " ";
//         }
//         delete[] p;
//     }
//     return 0;
// }