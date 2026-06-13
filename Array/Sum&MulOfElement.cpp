#include <iostream>
using namespace std;
void sum(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    cout<<"Sum Of All the Element of Array is : ";
    cout<<sum<<endl;
}void mul(int a[],int n){
    int mul=1;
    for(int i=0;i<n;i++){
        mul*=a[i];
    }
    cout<<"Multiply Of All the Element of Array is : ";
    cout<<mul;
}

int main(){
    int n;
    cout<<"Enter The Size of An Array : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Array: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    sum(a,n);
    mul(a,n);
    return 0;

}