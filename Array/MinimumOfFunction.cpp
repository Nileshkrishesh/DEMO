/*
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    cout << max;

    return 0;
}*/


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int mini = a[0],mint;

    for (int i = 1; i < n; i++) {
        mint= min(a[i],mini);
    }

    cout << "min="<<mint;

    return 0;
}