#include <iostream>
#include <climits>
using namespace std;
int reverse(int num){
  int rev=0;
  while(num!=0){
    int rem=num%10;
    if(rev>INT_MAX/10 || rev<INT_MIN/10){
      return 0;
    }
    rev=(rev*10)+rem;
    num=num/10;
  }
  return rev;
 }
 int main(){
  int num;
  cout<<"enter the number";
  cin>>num;
  cout<<reverse(num);
 }