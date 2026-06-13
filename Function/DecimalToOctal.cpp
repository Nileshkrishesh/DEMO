#include <iostream>
using namespace std;

int dtb(int n){
    int rem = 0, digit;
    while(n > 0){
        digit = n % 8;
        rem = rem * 10 + digit;
        n = n / 8;
    }
    return rem;
}

int reverse(int rem){
    int rem1 = 0, digit;
    while(rem > 0){
        digit = rem % 10;
        rem1 = rem1 * 10 + digit;
        rem = rem / 10;
    }
    return rem1;
}

int main(){
    int n = 25;

    int octal = reverse(dtb(n));

    cout << "Octal = " << octal;

    return 0;
}