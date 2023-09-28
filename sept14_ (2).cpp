#include<iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; (i <= num / 2); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int u, l, i;

    while (true) {
        cout << "Enter the upper Limit: ";
        cin >> u;

        if (cin.fail() || u < 0) {
            cout << "Invalid input. Please enter a non-negative integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    while (true) {
        cout << "Enter the lower Limit: ";
        cin >> l;

        if (cin.fail() || l < 0 || l > u) {
            cout << "Invalid input. Please enter a non-negative integer less than or equal to the upper limit." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    cout << "The Prime numbers between " << l << " and " << u << " are: " << endl;

    for (i = l; i <= u; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
