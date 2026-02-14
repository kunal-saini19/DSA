#include <iostream>
#include <vector>
using namespace std;
int MajorityElement(vector<int> &nums){
    int n=nums.size();
    for(int i = 0;i < n;i++ ){
        int feq=1;
        for(int j=i+1;j<n;j++){
            if(nums[i]==nums[j]){
                feq++;
            }
        
        }
        if(feq>n/2){
            return nums[i];
        }
    }
    return -1;
}
int main(){
    vector<int> nums={1,2,3,4,4,3,3,3,3,6,3};
    cout<<MajorityElement(nums);
}