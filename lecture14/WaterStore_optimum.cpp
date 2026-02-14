#include <iostream>
#include <vector>
using namespace std;
int WaterStore(vector<int> &nums){
    int start=0;
    int last=nums.size()-1;
    int ans=0;
        while(start<last){
        int width=last-start;
        int height=min(nums[last],nums[start]);
        int area=width*height;
        ans=max(ans,area);
        // first we do calculations on index of  'start=0','last=nums.size()-1' then update the value of start and last; 
        nums[start]>nums[last]?last--:start++;
    }
    return ans;
}
int main(){
    vector<int> nums={1,4,7,9,11,4,2,10};
    cout<<WaterStore(nums);
}
