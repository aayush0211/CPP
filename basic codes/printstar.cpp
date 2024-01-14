// print star
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n ";
    cin>>n;
    // char z = 'A';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<z<<" ";
            
    //     }
    //     cout<<endl;
    //     z++;
    // }
    // char z=65;
    // for(int i=1;i<n+1;i++){
    //     for(int j=n; j>=i;j--){
    //         cout<<" ";}
    //         for(int k=0;k<i;k++){

    //             cout<<z<<" ";
    //             z++;
    //             if(k>0){
    //             cout<<z<<" ";
    //             z++;
    //             };
    //         }
    //         cout<<endl;
    char z=65;
        for(int i=1; i<n; i++){
            for(int j=1; j<2*i+1 ; j++ ){

                if(j%2!=0)
                cout<<z;
                z++;
                if(j%2==0){
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
