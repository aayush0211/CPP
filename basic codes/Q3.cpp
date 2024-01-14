/*
3. Find sum of all numbers between two positive integers N and M, including N and M.
For example:
N = 3
M = 7
Sum = 25 (3 + 4 + 5 + 6 + 7)
*/

#include <iostream>
using namespace std;

int main() {
    int N, M;
    
    cout << "Enter two positive integers N and M: ";
    cin >> N >> M;

    if (N <= 0 || M <= 0) {
        cout << "Both N and M should be positive integers." << endl;
        return 1; 
    }

    
    int sum = 0;

    for (int i = N; i <= M; i++) {
        sum += i;
    }


    cout << "Sum = " << sum << endl;

    return 0;
}

