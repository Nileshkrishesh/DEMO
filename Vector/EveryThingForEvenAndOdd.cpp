#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter No. Of terms"<<endl;
    cin>>n;
    vector<int>v(n);
    cout<<"Enter Elements"<<endl;
    int sum1=0,count1=0,count2=0;
    int sum2=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==0){
            sum1+=v[i];
            count1++;
        }else{
            sum2+=v[i];
            count2++;
        }

    }
    cout<<"Sum Of Even Numbers :"<<sum1<<endl;
    cout<<"Count Of Even Numbers :"<<count1<<endl;
    cout<<"Sum Of Odd Numbers :"<<sum2<<endl;
    cout<<"Count Of Odd Numbers :"<<count2<<endl;
    cout<<endl<<"Sum Of All Numbers :"<<sum1+sum2;
}