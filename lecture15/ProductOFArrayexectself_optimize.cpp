#include <iostream>
#include <vector>
using namespace std;
vector<int> ProductOfArrayexceptself(vector<int>&nums){
    int n =nums.size();
    // vector<int> prefix(n,1);
    // vector<int> suffix(n,1);
    vector<int> ans(n,1);
    // peffix
    for(int i=1;i<n;i++){
        ans[i]=ans[i-1]*nums[i-1];
    }
    // suffix
    int suffix=1;
    for (int i = n-2; i >=0 ; i--){
        suffix*=nums[i+1];
        ans[i]*=suffix;
    }
    
    
    // for (int i = 0; i < n; i++){
    // {
       
    return ans;
}

int main(){
    vector<int>nums={-1,1,0,-3,3};
    vector<int>ans=ProductOfArrayexceptself(nums);
    for(int val:ans){
        cout<<val<<" ";
    }

}