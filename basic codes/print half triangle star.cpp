#include<iostream>
using namespace std;
int main(){

    for(int i =1; i<3; i++){

        for(int j=i; j<3; j++){

            cout<<" ";
        }

        for(int m=1; m<6 ; m++){

            if(m%2==0)
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}