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

    int min = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }

    cout << min;

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

    int max1 = a[0],maxi;

    for (int i = 1; i < n; i++) {
        maxi=max(a[i],max1);
    }

    cout << "max="<<maxi;

    return 0;
}