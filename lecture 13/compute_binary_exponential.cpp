#include <iostream>
using namespace std;
double bin(int power,double number){
    // int x=1;
    double ans=1.0;
    int binform=power;
    if(binform<0){
        number=1.0/number;
        binform=-binform;

    }
    while(binform>0){

        if(binform%2==1){
            ans=ans*number;
            
        }
        number*=number;
        binform=binform/2;
        
    }
    return ans;

}
int main(){
    int number=3;
    int power=-3;
    cout<<bin(power,number);
}