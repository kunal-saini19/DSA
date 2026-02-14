#include <iostream>
using namespace std;
int reverse(int arr[],int size){
    int start =0;
    int end = size-1;
    while(start < end ){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}
int main(){
    int arr[]={1,34,543,65,445,63,23};
    int size =7;
    reverse(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    cout<<endl;
}