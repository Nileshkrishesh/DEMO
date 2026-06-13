#include <iostream>
using namespace std;
int dtb(int n){
    int rem=0,digit;
    while(n>0){
        digit=n%8;
        rem=rem*10+digit;
        n=n/8;

    }
    return rem;
}
int reverse(int rem){
    int rem1=0,digit;
    while(rem>0){
        digit=rem%10;
        rem1=rem1*10+digit;
        rem1=rem1/10;
}
    return rem1
}
int main(){
    dtb;
    return 0;
}