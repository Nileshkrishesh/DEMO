


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