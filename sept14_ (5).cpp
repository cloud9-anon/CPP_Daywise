#include<iostream>
using namespace std;

int main() {
    int number, digit, sum = 0;
    cout << "Enter the number: ";
    cin >> number;
    cout << endl;

    if (number < 0) {
        number = -number;
    }

    while (number > 0) {
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }

    cout << "The sum of all digits is = " << sum << endl;

    return 0;
}
