#include <iostream>
#include <vector>
using namespace std;
int singleElsement(vector<int>&nums){
    int start=0;
    int end=nums.size()-1;
    if(end==0) return nums[0];
    while(start<=end){
        int mid=start+(end-start)/2;
        // if(mid==0) return nums[mid];
        // if(mid==end) return nums[mid];
        if(mid%2==0){
            // if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
            //     return mid;
            // }
            if(nums[mid]==nums[mid+1]){
                start=mid+1;
            }
            if(nums[mid]==nums[mid-1]){
                end=mid-1;
            }
    }    else if(mid%2!=0){
            // if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
            //     return mid;
            // }
            if(nums[mid]==nums[mid+1]){
                end=mid-1;
            }
            if(nums[mid]==nums[mid-1]){
                start=mid+1;
            }

    }   if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
        return nums[mid];
    }
}
}
int main(){
    vector<int> nums={3,3,2};
    cout<<singleElsement(nums);

}