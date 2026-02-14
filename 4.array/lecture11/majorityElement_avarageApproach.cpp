#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int MajorityElement(vector<int> &nums){
    int n=nums.size();
    int fre=1;
    int ans=nums[0];
    sort(nums.begin(),nums.end());
    
    for (int i =1 ;i<n;i++){
        if(nums[i]==nums[i-1]){
            fre++;
        }
        else{
            fre=1;
            ans=nums[i];
        }
        
    if (fre>n/2){
    return ans;
    }
    
    }
    return -1;
}
int main(){
    vector<int> nums={1,2,2,4,2,2,4,3,2,};
    cout<<MajorityElement(nums);
}