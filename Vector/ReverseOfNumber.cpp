#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter No. Of terms"<<endl;
    cin>>n;
    vector<int>v(n);
    cout<<"Enter Elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"Original Vector :";
    for(int val: v){
        cout<<val<<" ";
    }

    int temp;
    for(int i=0;i<n/2;i++){
        temp=v[i];
        v[i]=v[n-i-1];
        v[n-i-1]=temp;
    }



    cout<<endl<<"Reverse Of Vector :";
    for(int val: v){
        cout<<val<<" ";
    }



}