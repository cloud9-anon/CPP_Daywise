#include<iostream>
using namespace std;

int main() {
    int number;

    while (true) {
        cout << "Enter a positive integer: ";
        cin >> number;

        if (cin.fail() || number <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    cout << "Factors of " << number << " are: ";
    
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            cout << i << ",";
        }
    }

    return 0;
}
