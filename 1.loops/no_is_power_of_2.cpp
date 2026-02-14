#include <iostream>
#include <cmath>
using namespace std;
bool power(int num){
  bool ispower=false;
  for ( int i = 0; i <= 32; i++)
  {
    // int pow=2**i;
    if (num==pow(2,i))
    {
      // cout<<"number is one of the power of two";
      ispower=true;
      break;
    }
    // else{
    //   cout<<"number is not one of the power of two";
    //   break;
    // }
   
  }
   return ispower;
}
int main(){
  int num;
  cout<<"enter a number:-";
  cin>>num;
  bool pow=power(num);
  if(pow){
    cout<<"number is one of the power of two";
  }
  else{
    cout<<"number is not one of the power of two";
  }
}