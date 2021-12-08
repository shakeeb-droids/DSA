#include<iostream>
using namespace std;
//Correct the incorrect
// void print(int n){
//     if(n == 1){
//         cout << n << " ";
//     }
//     cout << n << " ";
//     print(n - 1);
// }

//correct code
int print(int n)
{
    if(n == 0){
        return 1;
    }
    print(n - 1);
    cout << n << " ";
    
}
int main(){
    int n;
    cin >> n;
  
    print(n);
}


