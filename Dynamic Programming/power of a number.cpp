#include<iostream>
#include<cmath>
using namespace std;

// int main(){
//     int result = 1;
//     int base,exp;
//     cin>>base>>exp;
//     for(int i=0;i<exp;i++){
//         result = result*base;
//     }
//     cout<< "result: " <<result;

// }

// int main(){
    
//     int base,exp;
//     cin>>base>>exp;

//     cout << "result: " << pow(base, exp);
// }
int fn(int base, int exp){
    if(exp==0){
        return 1;
    }
    return base * fn(base, exp - 1);
}
int main(){
     int base,exp;
    cin>>base>>exp;

    int result = fn(base, exp);

    cout << "result : " << result;
}