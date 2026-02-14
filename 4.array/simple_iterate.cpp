#include <iostream>
using namespace std;
int main(){
  int marks[5]={1,23,46,75,89};
  for ( int i = 0; i < sizeof(marks)/sizeof(int); i++)
  {
   cout<<marks[i]<<endl; 
  
}
}