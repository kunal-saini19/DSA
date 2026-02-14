#include <iostream>
using namespace std;
int decimal(int num){
  int ans=0;
  int pow=1;
  while(num>0){
    int rem=num %2;
    num=num /2;
    ans+=(rem*pow);
    pow*=10; 
  }
  return ans;
}
  
int main(){
  int num;
  cout<<"enter number :";
  cin>>num;
 for (int i = 0; i <= num;i++)
 {
  cout<<decimal(i)<<endl;
}
}