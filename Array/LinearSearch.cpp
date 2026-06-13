#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int a[n];
    int TarKey=9;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int found=0;
    for(int i=0;i<n;i++){
        if(a[i]==TarKey){
            cout<<"Found at Index: "<< i;
            found++;
            break ;
        }
    }
    if(found== false){
        cout<<"Not Found";
    }
}