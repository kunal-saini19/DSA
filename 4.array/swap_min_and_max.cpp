#include <iostream>
#include <climits>
using namespace std;
void minandmax(int arr[],int size){

    // yaha pe dekh alag concept laga hai 
    //  issme ham loop "1" se chalayenge kyuki hamne issme indexof min/max ko "0" liyaa hai isliye ham yaha pe direct nahi chala sakte loop
    
    int indexofmax= 0;
    int indexofmin=0;
    for(int i = 1 ; i < size ; i++){
        
        // yaha pe index "0" ko index one se comapre karenge and se continu rakhenge

        if (arr[indexofmax]<arr[i]){
             indexofmax=i;
            
        }
        if(arr[indexofmin]>arr[i]){
            indexofmin=i;
        }
        
    }
    swap(arr[indexofmin],arr[indexofmax]);
}
int main(){
    int arr[]={10,20,30,40};
    int size=4;
    cout<<"array before swapping "<<endl;
    for(int i = 0 ;i < size ; i++){
        cout<<arr[i]<<" "<<endl;
    }
    minandmax(arr,size);
    cout<<"array after swapping "<<endl;
    for(int i = 0 ;i < size ; i++){
        cout<<arr[i]<<" "<<endl;
    }
}