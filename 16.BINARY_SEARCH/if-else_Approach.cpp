#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int>&nums,int target){
    int start=0;
    int end=nums.size()-1;
    int mid=0;
    while(start<=end){
        // optimize the mid 
         mid=start+(start+end)/2;
        if(nums[mid]>target){
            end=mid-1;
        }
        else if (nums[mid]<target){
            start=mid+1;
        }
        else if(nums[mid]==target){
            return mid;
        }        
    }
    return mid;
}
int main(){
    vector<int> nums={2,3,54,56,3,7,93};
    int target=93;
    cout<<binarySearch(nums,target);

}