//Find Largest, Second_largest, smallest and Second_smallest element in an array.

#include<iostream>
#include<limits.h>
using namespace std;

int findMax(int nums[] , int n){
    int max=INT_MIN;
        for(int i=0;i<n;i++){
            if(max<nums[i]){

                max = nums[i];
            }
        
        }
        return max;
}
int findsecondMax(int nums[] , int maxi, int n){
    int second_max=INT_MIN;
        for(int i=0;i<n;i++){
            if(second_max<nums[i] && nums[i]<maxi){
                second_max = nums[i];
            }
        
        }
        return second_max;
}
int findsecondMin(int nums[] , int mini, int n){
    int second_min=INT_MAX;
        for(int i=0;i<n;i++){
            if(second_min>nums[i] && nums[i]>mini){
                second_min = nums[i];
            }
        
        }
        return second_min;
}
int findMin(int nums[], int n){
    int min=INT_MAX;
        for(int i=0;i<n;i++){
            if(min>nums[i]){
                min = nums[i];
            }
        }
        return min;
}
int main(){
    int n;
    do{
    cout<<"Enter size of array \n";
    cin>>n;
    }while(n<=0 || n>100);
    int nums[n];
    cout<<"Enter values of array \n";
    for(int i=0;i<n;i++) cin>>nums[i];

    int maxi = findMax(nums, n);
    int mini = findMin(nums,n);
    int second_max = findsecondMax(nums,maxi,n);
    int second_min = findsecondMin(nums,mini,n);
     cout<<"max num is: "<<maxi<<"\n, minimum is: "<<mini<<"\nand second_MAX is: "<<second_max<<"\nand second_MIN is: "<<second_min;
     return 0;

}