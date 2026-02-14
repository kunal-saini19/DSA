#include <iostream>
using namespace std;
int fac(int num){
  int sum =1;
  for(int i=1 ;i<num+1;i++){
    sum *=i;
  }
  return sum;

}
int main(){
  int n;
  cout<<"enter the number:";
  cin>>n;
  int r;
  cout<<"enter the number:";
  cin>>r;
  cout<< fac(n)/(fac(r)*(fac(n-r)));
  return 0;
}