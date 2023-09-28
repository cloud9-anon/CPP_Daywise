#include<iostream>
using namespace std;

int reverse(int num) {
    int rev = 0;
    while (num > 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    return rev;
}

int main() {
    int number;
    cout << "Enter a positive integer N: ";
    cin >> number;

    int reversedNumber = reverse(number);

    if (number == reversedNumber) {
        cout << "A palindrome." << endl;
    } else {
        cout << "Not a palindrome." << endl;
    }

    return 0;
}
