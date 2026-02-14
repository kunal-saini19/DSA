#include <iostream>
#include <vector>
using namespace std;
int MajorityElement(vector<int> &nums){
    int n=nums.size();
    int fre =0;
    int ans =0;
    for(int i = 1 ; i < n ; i++){
         // Moore’s Voting does NOT compare with previous element.
        // It always compares the current element with the current candidate
        if (fre==0){
            fre=1;
            ans=nums[i];
        }
        if (nums[i]==ans){
            fre++;
        }
        else{
            fre--;
        }
       
    }
    int count=0;
    for(int q:nums){
        if (q==ans){
            count++;
        }
    }   
    if (count>n/2){
        return ans;
    } else{
        return -1;
    }
}
int main(){
    vector<int> nums={2,3,3,4,3,4,3};
    cout<<MajorityElement(nums);
}