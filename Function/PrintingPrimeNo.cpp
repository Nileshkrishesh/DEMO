#include <iostream>
using namespace std;

bool CheckPrime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

void PrintPrime(int N) {
    for (int i = 1; i <= N; i++) {
        if (CheckPrime(i)) {
            cout << i << " ";
        }
    }
}

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    PrintPrime(N);

    return 0;
}