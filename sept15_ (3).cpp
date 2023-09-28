#include<iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N, M;
    cout << "Enter two positive integers N and M (separated by space): ";
    cin >> N >> M;
    
    cout << "Prime Numbers between " << N << " and " << M << ": ";
    for (int i = N; i <= M; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    
    cout << endl;
    return 0;
}
