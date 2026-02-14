#include <iostream>
#include <vector>
using namespace std;
vector<int> ProductOFArrayExecptSelf(vector<int> &nums){
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++){
        int product=1;
        for (int j = 0; j < nums.size();j ++){
            if(i!=j){
                product*=nums[j];
                }
            }
            ans.push_back(product);
        }
    return ans;
} 
int main(){
    vector<int> nums={-1,1,0,-3,3};
    vector<int> result = ProductOFArrayExecptSelf(nums);
    for(int num : result){
        cout << num << " ";
    }

}