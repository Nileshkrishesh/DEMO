#include <iostream>
using namespace std;
int BinaryToDecimal(int num){
    int rem,sum=0,pow=1;
    while(num>0){
        rem=num%10;
        num=num/10;
        sum+=rem*pow;
        pow*=2;
    }
    return sum;

}
int main(){
    
        cout<<BinaryToDecimal(1011)<<endl;
        cout<<BinaryToDecimal(1010)<<endl;
        cout<<BinaryToDecimal(1000)<<endl;
}