#include <iostream>
using namespace std;
void Reverse(int a[],int n){
    int temp;
    for(int i=0;i<n/2;i++){
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    cout<<"Reverse Of An Array :";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Eter The Size of Array";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Original Array :";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    Reverse(a,n);
}