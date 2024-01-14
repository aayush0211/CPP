#include<bits/stdc++.h>
using namespace std;

void printS (int index, vector<int> &ds, int s, int sum, int arr[], int n){
    if(index == n){
        if(s==sum){
            for(auto it: ds) cout<<it<<" ";
            cout<<endl;
        }
        return;
    }
    ds.push_back(arr[index]);
    s+=arr[index];
    //pick
    printS(index+1, ds, s, sum, arr, n);
     ds.pop_back();
    s-=arr[index];

    // not pick
    printS(index+1, ds, s, sum, arr, n);


}

int main(){

    int arr[] = {1,2,1};
    int n=3;
    int sum = 2;
    vector<int> ds;
    printS(0, ds,0, sum, arr, n);
}