
#include <iostream>
#include <fstream>

using namespace std;


// we made a function to calculate factorials as given in the question
// here we take long long as to deal with larger values to not crash our code in case. 
long long calculateFactorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * calculateFactorial(n - 1);
    }
}

int main() {
    const int num = 10;
    int numbers[num];

     cout << "Enter 10 numbers:\n";
    for (int i = 0; i < num; ++i) {
         cout << "Number " << (i + 1) << ": ";
         cin >> numbers[i];
    }

    
     ofstream outputFile("factorials.txt");
    if (outputFile.is_open()) {
        for (int i = 0; i < num; ++i) {
            long long factorial = calculateFactorial(numbers[i]);
            outputFile << numbers[i] << ", " << factorial << "\n";
        }
        outputFile.close();
         cout << "Factorials written to file 'factorials.txt'.\n";
    } else {
         cerr << "Error opening the file for writing.\n";
    }

    return 0;
}
