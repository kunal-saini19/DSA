#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int kadan(vector<int> &nums){
    int currentsum=0;
    int maxsum=INT_MIN;
    for(int val:nums){
        currentsum+=val;
        maxsum=max(currentsum,maxsum);
        if(currentsum<0){
            currentsum=0;
        }
    } return maxsum;

}
int main(){
    vector<int> sum={-1,-2,-3,-5,-7,-9,-19,-10};
    cout<<kadan(sum)<<" ";
}