#include <iostream>
#include <climits>
using namespace std;
int main(){
  int num[]={23,21,2,43,5,345,1,6,5,4,34,54,4,3};
  int smallest=INT_MAX;
  int largest=INT_MIN;
  int index_of_smallest;
  int index_of_largest;

  for (int i = 0; i < sizeof(num)/sizeof(int); i++)
  {
    if(num[i]<smallest){
      smallest=num[i];
      index_of_smallest=i;
    }    
    if(num[i]>largest){
      largest=num[i];
      index_of_largest=i;
    }  
  }
  cout<<"index of minimum number:-"<<index_of_largest<<endl;
  cout<<"index of minimum number:-"<<index_of_smallest<<endl;
}