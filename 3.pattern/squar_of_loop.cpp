// #include <iostream>
// using namespace std;
// int main(){
//   int n;
//   cout<<"enter number:-";
//   cin >> n;
//   for (int i = 1; i <=n; i++){
//     char ch ='A';
//     for (int j = 1; j <=n;j++)
//     {
//       cout<<ch;
//       ch=ch+1;
//     }
//      cout<<endl;
//   }
 
  

// }

#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter number:-";
  cin >> n;
  for (int i = 1; i <=n; i++){
    for (int j = 0; j <n;j++)
    {
      cout<<char('A'+j);
    }
     cout<<endl;
  }
 
  

}
