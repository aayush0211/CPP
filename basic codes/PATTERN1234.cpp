#include<iostream>
using namespace std;

int main(){
    
    int n=5;

    for(int i=1; i<5; i++){
        
        static int m =0; 

        for( int j=1 ; j<n; j++){

        m++;
        
        cout<<m<<" ";


    }
    cout<<endl;
    n--;
}
return 0;

}