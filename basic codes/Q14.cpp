/*

14. Given a positive integer N, print the number in words.
For example:
N = 5312
Result = Five Thousand Three Hundred Twelve
*/

#include <iostream>
#include <string>
using namespace std;

string numberToWordsHelper(int num, string ones[], string teens[], string tens[]);

string numberToWords(int num) {
    if (num == 0) {
        return "Zero";
    }
    
    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string teens[] = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    string thousands[] = {"", "Thousand", "Million", "Billion"};

    string result = "";
    int i = 0;

    while (num > 0) {
        if (num % 1000 != 0) {
            result = numberToWordsHelper(num % 1000, ones, teens, tens) + thousands[i] + " " + result;
        }
        num /= 1000;
        i++;
    }

    return result;
}

string numberToWordsHelper(int num, string ones[], string teens[], string tens[]) {
    if (num == 0) {
        return "";
    } else if (num < 10) {
        return ones[num] + " ";
    } else if (num < 20) {
        return teens[num - 10] + " ";
    } else {
        return tens[num / 10] + " " + numberToWordsHelper(num % 10, ones, teens, tens);
    }
}

int main() {
    int N = 5312;
    string result = numberToWords(N);
    cout << "Result = " << result << endl;
    return 0;
}
