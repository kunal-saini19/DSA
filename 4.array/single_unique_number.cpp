#include <iostream>
#include<vector>
using namespace std;
int singlenum(vector<int> &vec){
    int ans=0;
    for(int each : vec){
        ans=each^ans;
    }
    return ans;
}
int main(){
    vector<int> vec={ 1,2,3,4,3,2,1 };
    cout<<singlenum(vec);
}