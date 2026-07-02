#include <iostream>
#include <vector>
using namespace std;
void selectionSort(vector<int>&arr,int n){//O(n^2)
    
    for(int i=0;i<n-1;i++){
        int smallestIndex=i;
        for(int j=i+1;j<n-i-1;j++){
            
            if(arr[j]<arr[smallestIndex]){
                smallestIndex=j;
            }
        }
        swap(arr[i],arr[smallestIndex]);
    }
}
void printArray(vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n=5;
    vector<int> arr={4,1,5,2,3};
    selectionSort(arr,n);
    printArray(arr,n);
    return 0;
}