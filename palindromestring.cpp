#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char str[]) {
    // Write your code here
    int l = strlen(str);
    int j= 0;
    for(int i=l-1;i>=0;i--)
    {
        
        if(str[i]==str[j])
        {
            
            j++;
            continue;
        }
        else
        {
            return 0;
            break;
        }
    }
    return 1;
}


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}