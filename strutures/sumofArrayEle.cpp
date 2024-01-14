#include<iostream>
using namespace std;

int arrayy(int* arr, int n){
    int sum = 0;
   
    for (int i = 0; i < n;i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int n;
    cout << "Enter the number of elements in the array \n";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int result = arrayy(arr, n);
    cout << "Sum is : " << result << endl;
    return 0;
}