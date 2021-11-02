#include<iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
     * Print output as specified in the question.
     
     */
     int count_character =0;
        int count_digits =0;
        int count_whitespaces=0;
    char n;
    n = cin.get();
    while(n!='$')
    {
        if(n>=97 && n<=122)
        {
            count_character++;
        }
        else if(n>=48 && n<=57)
        {
            count_digits++;
        }
        else if(n==' ' || n== '\n' || n== '\t')
        {
            count_whitespaces++;
        }
        n = cin.get();
        
    }
    cout << count_character << " " << count_digits << " " << count_whitespaces << endl; 
}


