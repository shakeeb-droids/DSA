#include <iostream>
#include "solution.h"
using namespace std;
int multiplyNumbers(int m, int n) {
    // Write your code here
    
    if(m==0 || n==0)
        return 0; 
    int smallAns = multiplyNumbers(m,n-1);
    return smallAns + m;
}


int main() {
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}
