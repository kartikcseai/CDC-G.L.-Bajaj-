#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxSubArray(vector<int>& nums) {
        int currentSum = 0;
        int maxSum = INT_MIN;
        for(int i = 0 ; i < nums.size() ; ++i){
            currentSum += nums[i];
            maxSum = max(maxSum,currentSum);
            if(currentSum < 0){
                currentSum = 0;
            }

        }
        return maxSum;
}

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
    cout<<maxSubArray(v);
}
