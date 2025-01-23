#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"enter number of elements : ";
    cin>>n;
    cout<<"ENTER ELEMENTS."<<endl;
    for(int i=0;i<n;i++){
        int c;
        cout<<"element at "<<i<<" ";
        cin>>c;
        v.push_back(c);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    int x;
    cout<<endl;
    cout<<"Target Sum : ";
    cin>>x;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]+v[j]==x) cout<<"("<<i<<","<<j<<")"<<endl;
        }
    }
}
