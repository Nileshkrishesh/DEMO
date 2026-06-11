#include <iostream>
using namespace std;

int Factorial(int n){
    int mul = 1;
    for(int i = 1; i <= n; i++){
        mul *= i;
    }
    return mul;
}

int nCr(int n, int r){
    int fact_n = Factorial(n);
    int fact_r = Factorial(r);
    int fact_nmr = Factorial(n - r);

    return fact_n / (fact_r * fact_nmr);
}

int main(){
    int n = 8, r = 2;
    cout << nCr(n, r) << endl;

    return 0;
}