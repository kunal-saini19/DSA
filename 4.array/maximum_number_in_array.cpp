#include <iostream>
#include <climits>
using namespace std;
int main(){
  int marks[]={23,4,35,435,54,5,4,542,6,57};
  int largest=INT_MIN;
  for (int  i = 0; i < sizeof(marks)/sizeof(int); i++)
  {
    // if(marks[i]>largest){
    //   largest=marks[i];
    // }
    largest=max(marks[i],largest);
  }
  cout<<largest<<endl;  
}