#include <iostream>
#include <string>
using namespace std;
string  CheckPrime(int n){
    int count=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count++;
        }

    }
if(count){
    return "Not a Prime Number";
}
else{
    return "Prime Number";
}
}
int main(){
    cout<<CheckPrime(22)<<endl;
    cout<<CheckPrime(21)<<endl;
    cout<<CheckPrime(7)<<endl;
    cout<<CheckPrime(13)<<endl;
    return 0;
}