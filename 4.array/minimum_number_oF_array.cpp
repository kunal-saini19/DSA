#include <iostream>
#include <climits>
using namespace std;
int main(){
  int num[]={2,34,54,7654,1,56,5646643,};
  int smallest=INT_MAX;
  for(int i =0;i<sizeof(num)/sizeof(int);i++){
      // if(num[i]<smallest){
      //   smallest=num[i];
      // }
      smallest=min(num[i],smallest);
  }
  cout<<smallest;
}