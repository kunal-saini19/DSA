#include <iostream>
using namespace std;
bool prime(int num){
  bool pr=true;
  for(int i=2; i<num ;i++){
    if (num%i==0){
      pr=false;
      return pr;
    }
  }
  
}
int main(){
  int num;
  cout<<"enter the number";
  cin>>num;
  bool pr=prime(num);
  if (pr==true)
  {
    cout<<"number is prime";
  }
  else{
    cout<<"number is not prime";
  }
  
}