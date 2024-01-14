// print star
#include <iostream>
using namespace std;

int main() {
    int n = 5; // Adjust this value to change the number of lines

    for (int i = 1; i <= n; i++) {
        // Print the first part of the line
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        // Print the spaces
        for (int k = 1; k <= 2 * (n - i); k++) {
            cout << "  ";
        }

        // Print the second part of the line (in reverse order)
        for (int l = i; l >= 1; l--) {
            if (l != n) // Avoid printing an extra space after the last number
                cout << l << " ";
            else
                cout << l; // No space after the last number
        }

        cout << endl;
    }
}