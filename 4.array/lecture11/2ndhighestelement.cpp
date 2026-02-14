#include<iostream>
#include <vector>
#include <climits>
using namespace std;
int secondhighstelement(vector<int>&nums){
    int first=INT_MIN;
    int second=INT_MIN;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>first){
            second=first;
            first=nums[i];

        }
        else if(nums[i]>second && nums[i]<first){
            second=nums[i];
        }
    //     first=max(first,nums[i]);
        
    //     second=max(second,nums[i-1]);
    // }
    // if(second<max){
    //     return second;
    // 
    
    }return second;
}
int main(){
    vector<int> nums={-1,5,4,9,-5,2};
    cout<<secondhighstelement(nums);
}