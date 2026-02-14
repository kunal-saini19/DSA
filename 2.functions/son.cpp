#include <iostream>
using namespace std;
int son(int n){
  int sum=0;
  for (int i = 0; i <n+1; i++)
  {
    sum+=i;
  }
  return sum;
}
int main(){
  int n;
  cout<<"enter number";
  cin>>n;
  int a=son(n);
  cout<< a;
  return 0;
} 