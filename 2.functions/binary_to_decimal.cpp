#include <iostream>
using namespace std;
int covert(int num){
    int pow=1;
    int rem;
    int dec=0;
    while(num>0){
      rem=num%10;
      dec+=rem*pow;
      num/=10;
      pow*=2;
    }
    return dec;
}
int main(){
  int num;
  cout<<"enter the binary number: ";
  cin>>num;
  cout<<covert(num);
  }
