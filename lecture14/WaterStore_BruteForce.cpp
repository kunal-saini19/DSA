#include <iostream>
#include <vector>
using namespace std;
int WaterStore(vector<int> &nums){
    int ans=0;
    for(int i=0;i<nums.size();i++ ){
        for(int j=i+1;j<nums.size();j++){
            int width=j-i;
            int minheight=min(nums[i],nums[j]);
            int volume=width*minheight;
            ans=max(ans,volume);
        }
    }
    return ans;
}
int main(){
    vector<int>nums={1,4,7,9,11,4,2,10};
    cout<<WaterStore(nums);
}