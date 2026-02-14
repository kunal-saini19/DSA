// #include <iostream>
// using namespace std;
// int main(){
//   int n;
//   cout << "enter the number";
//   cin >> n;
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < i; j++)
//     {
//       cout << " ";

//     }for (int j = 0; j < i+1 ; j++)
//     {
//         cout << j+1;
//     }
//     cout<<endl;
  
//   }
//   for (int k = 0; k < n; k++)
//   {
//     for (int l = k; l > 0;  l--)
//     {
//       cout << l;
//     }
//     cout << endl;
//   }
  
  
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    // Upper part
    for (int i = 0; i < n; i++) {
        // Spaces
        for (int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        // Numbers
        for (int j = 0; j < i + 1; j++) {
            cout << j + 1;
        }
        // cout << endl;
   
        for (int l = i; l > 0; l--) {
            cout << l;
        }
        cout << endl;
    }

    return 0;
}
