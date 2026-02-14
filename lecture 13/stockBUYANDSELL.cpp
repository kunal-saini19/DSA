#include <iostream>
#include <vector>
using namespace std;
int stock(vector<int> &vec){
    int max_profit=0;
    int buyStock=vec[0];
    for(int i=0;i<vec.size();i++){
        // agar next elemet bada hoga buystock se to me can sell it ,BUT if max profit is already high so why we buy it on thiis elemnt 
        if (vec[i]>buyStock){
             max_profit=max(max_profit,vec[i]-buyStock);
        }
        // ham minimum value pe hi buy karenge to ham check karte rhanynege konsi minimum value hai 
        buyStock=min(vec[i],buyStock);
    }
    return max_profit; 
}

int main(){
    vector<int> nums={2,7,1,3,5,6,8};
    cout<<stock(nums);
}