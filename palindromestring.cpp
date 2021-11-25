#include <iostream>
#include <cstring>
using namespace std;
void trimSpaces(char input[]) {
    // Write your code here
    for(int i=0;input[i]!='\0';i++)
    {
        if(input[i]==' ')
        {
            input[i] = input[i+1];
            input[i+1] = ' ';
        }
    }
}

int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}

