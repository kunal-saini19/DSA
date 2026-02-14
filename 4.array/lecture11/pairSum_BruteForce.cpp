#include <iostream >
using namespace std;
 void pairSum(int arr[],int size,int target){
        
    for(int i =0;i < size;i++ ){
        for(int j = i+1; j < size;j++){
            if(arr[i]+arr[j]==target){
                cout<<"pair are "<<arr[i]<<":"<<arr[j]<<endl;
                return;
                               
            }
            
        }
    }
    cout<<"no pair found";
}
int main(){
    int arr[]={1,2,3,4};
    int size=4;
    int target=4;
    pairSum(arr,size,target);
    return 0;
}