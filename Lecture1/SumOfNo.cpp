#include <iostream>
using namespace std;

int sum(int N){
    int sum = 0;

    for(int i=0; i<=N; i++){
        sum += i;
    }

    return sum;
}

int main(){
    cout << "Sum of 5 no. is " << sum(5) << endl;
    cout << "Sum of 10 no. is " << sum(10) << endl;
    return 0;
    
}