#include <iostream>
#include <vector>
using namespace std;

vector<int> PairSum(vector<int> &num,int target){
    vector<int> ans;
    int n=num.size();
    int start=0;
    int end=n-1;
    while(start<end){
        int pairsum=num[start]+num[end];
            
        if(target<pairsum){
            end--;
        }
        else if(target>pairsum){
            start++;
        }
        else {
            ans.push_back(num[start]);
            ans.push_back(num[end]);
            return ans;
        }
    }
    return ans;
}
int main(){
    vector<int> nums={7,8,19,21};
    int target=27;
    vector<int> result=PairSum(nums,target);
    // this result[0]/result[1] gives us the index of "nums vector" not the number 
        cout<<"pair is ("<< result[0]<<":"<<result[1]<<
    ")";
        
}