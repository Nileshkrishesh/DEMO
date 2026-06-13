/* #include <iostream>
using namespace std;

int dtb(int n){
    int rem = 0, digit;

    while(n > 0){
        digit = n % 2;
        rem = rem * 10 + digit;
        n = n / 2;
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

    int binary = reverse(dtb(n));

    cout << "Binary = " << binary;

    return 0;
}*/

#include <iostream>
using namespace std;
int decToBinary(int decNum){
    int ans=0,pow=1;
    while(decNum>0){
        int rem=decNum%2;//9826480707
        decNum/=2;
        ans+=(rem*pow);
        pow*=10;
    }
    return ans;
}
int main(){
    
    for (int i=1;i<=10;i++){
    cout<<decToBinary(i)<<endl;
    return 0;
}
}