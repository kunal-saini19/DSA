#include <iostream>
using namespace std;
void power(int num){
  if(num >0 && (num&(num-1))==0){
    cout<<"number is a power of 2";
  }
  else{
    cout<<"number is not A power of 2";
  } 
}
int main(){
  int num;
  cout<<"enter the number";
  cin>>num;
  power(num);
}
