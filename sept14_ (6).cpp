#include<iostream>
using namespace std;

int main() {
    int number, digit, product = 1;
    cout << "Enter the number: ";
    cin >> number;
    cout << endl;

    if (number < 0) {
        cout << "Invalid input. ";
    } else {
        while (number > 0) {
            digit = number % 10;
            product = product * digit;
            number = number / 10;
        }
        cout << "The product of all digits is = " << product << endl;
    }

    return 0;
}

