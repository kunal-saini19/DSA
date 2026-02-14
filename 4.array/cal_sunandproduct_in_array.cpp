#include <iostream>
using namespace std;
void sumANDproduct(int arr[],int size){
    int sum=0;
    int prod=1;
    for (int i = 0 ; i < size ; i++){
        sum+=arr[i];
        prod*=arr[i];
    }
    cout<<"sum is " <<sum<<" prduct is "<<prod;
}
int main(){
    int arr[]={1,2,3,4};
    int size=4;
    sumANDproduct(arr,size);
}