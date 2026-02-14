#include <iostream>
#include <climits>
using namespace std;
int maxsum(int arr[],int size){
    int maxsum=INT_MIN;
    for(int i=0;i<size;i++){
        int currentsum=0;
        for(int j= i ;j<size;j++){ 
            currentsum+=arr[j];
            maxsum=max(currentsum,maxsum);
        }
    }
       return maxsum;
}
int main(){
    int arr[]={1,2,3,4};
    int size=4;
    cout<<maxsum(arr,size);
}