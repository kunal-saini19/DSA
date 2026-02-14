#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter number:-";
  cin >> n;
  int num=0;
  for (int i = 0; i <n; i++){
    for (int j = 0; j <n;j++)
    {
      // cout<<char('A');
      cout<<char('A'+num);
      num++;
    }
     cout<<endl;
  }
 
  

}
