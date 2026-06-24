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

    vector<int>EvenVector;
    vector<int>OddVector;
    for(int i=0;i<n;i++){
        if(v[i]%2==0){
            EvenVector.push_back(v[i]);
        }else{
            OddVector.push_back(v[i]);
        }
    }
    int sume=0;
    for(int i=0;i+1<EvenVector.size();i++){
        sume+=EvenVector[i]^EvenVector[i+1];
    }
    int sumo=0;
    for(int i=0;i+1<OddVector.size();i++){
        sumo+=OddVector[i]^OddVector[i+1];
    }

    cout<<endl<<"Sum Of Even Numbers :"<<sume<<endl;
    cout<<"Sum Of Odd Numbers :"<<sumo<<endl;

}