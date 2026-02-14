#include <iostream>
using namespace std;
void intraction(int arr1[],int arr2[],int size1,int size2){
    for(int i = 0; i < size1 ;i++ ){
        // "int count" loop ke ander isliye  likh hai kyuki isko baar baar zero pe set karna hai ,if hame issko upper (global parameter) likh denge to ye add hi karta jayegaa 
        int count=0;
        for(int j = 0 ; j < size2 ;j++){
            if(arr1[i]==arr2[j]){
                count+=1;
            }            
        }
        if(count==1){
            cout<<arr1[i]<<" ";
        }
    }

}
int main(){
    int arr1[]={1,2,3,45,6};
    int size1 = 5;
    // int arr2 = {4,8,6,7};
    int arr3[]= {4,8,6,7,1,2,3};
    int size2 =7;
    intraction(arr1,arr3,size1,size2);
}