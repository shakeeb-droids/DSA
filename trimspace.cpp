#include <iostream>
#include <cstring>
using namespace std;

void trimSpaces(char input[]) {
    // Write your code here
    int c=0;
    int l = strlen(input);
    for(int i=0;i<l;i++)
    {
        if(input[i]!=' ')
        {
           input[c] = input[i];
              c++;
      
        }
        
    }
    input[c] = '\0';
}
int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}

