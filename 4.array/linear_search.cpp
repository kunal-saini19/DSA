#include <iostream>
using namespace std;
int linear(int size,int arr[],int tar){
    for (int  i = 0; i < size; i++)
    {
        if (arr[i]==tar)
        {
            return i;
        }
        
    }
     return -1;
}
int main(){
    int size=7;
    int arr[]={1,45,65,3,90,87,56};
    int tar=56;
    cout<<"index value of " << tar << " is" <<endl;
    cout<<linear(size,arr,tar);
    
}