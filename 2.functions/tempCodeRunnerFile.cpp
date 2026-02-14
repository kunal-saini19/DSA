#include <iostream>
using namespace std;
int covert(int num){
    int pow=1;
    int dec=0;
    while(num>0){
      int rem=num%10;
      dec+=rem*pow;
      num/=10;
      pow*=2;
      
    }
}
int main(){
  int num:
  cout<<"enter the number: ";
  cin>>num;
  cout<<covert(num);
  }