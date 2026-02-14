#include <iostream>
using namespace std;
void unique(int arr[],int size){
    
    for (int i = 0; i < size; i++)
    {   
        int count=0;
        
        for (int j = 0; j < size; j++)
        {
            if (arr[i]==arr[j]){
                count+=1;
                
                
            }
            
        }
        if(count==1){
            cout<<arr[i]<<" ";
        }
    }
    
}
int main(){
    int arr[]={1,2,3,4,5,6,5,7,8,3};
    int size=10;
    unique(arr,size);
 }