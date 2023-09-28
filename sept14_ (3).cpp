#include <iostream>
using namespace std;

int main() {
    int number, digit;
    cout << "Enter the number: ";
    cin >> number;

    while (number > 0) {
        digit = number % 10;
        number = number / 10;
    }

    cout << "The first digit is = " << digit << endl;

    return 0;
}
