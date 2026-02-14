#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter number:-";
  cin >> n;
  int num=65;
  for (int i = 0; i <n; i++){
    for (int j = i+1; j >0;j--)
    {
      
     cout<<char(j+64)<<" ";
     num++;
  }
  cout<<endl;
}
  

}
