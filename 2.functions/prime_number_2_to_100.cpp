// #include <iostream>
// #include <cmath>
// using namespace std;
// void prime(int num){
//   // bool isprime=true;
//    for(int i=2;i<=num;i++){
//     bool isprime=true;
//       for(int j=2;j<sqrt(i);j++){
//         if (i%j==0){
//           isprime=false;
//           break;
//         }
//         // else{
//         //   cout<<i<<endl;
//         // }
//         if(isprime=true){
//           cout<<i<<endl;
//         }

//         }
        
//       }
        
//     }

// int main(){
//   prime(100);
// } 
#include <iostream>
using namespace std;

void prime(int num) {
    for (int i = 2; i <= num; i++) {
        bool isprime = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isprime = false;
                break;
            }
        }
        if (isprime) {
            cout << i << " ";
        }
    }
}

int main() {
    prime(100);
}
