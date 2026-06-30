# include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> arr,int tar){
    int st=0,end=arr.size()-1;
    int mid= (st+end)/2;
    while(st<=end){
        if(arr[mid]<tar){
            st=mid+1;
        }else if (arr[mid]>tar){
            end=mid-1;
        }else{
            return mid;
        }
    }
    return -1; // Element not found
}
int main(){
    vector<int>arr={1,2,3,4,5,6,7,8,9};
    int tar=5;
    int ans=binarySearch(arr,tar);
    cout<<ans;
}