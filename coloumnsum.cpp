#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
    * Print output as specified in the question.
    */
    int m,n;
    cin>>m>>n;
    int a[m][n];

    for(int i=0;i<m;i++)
    {
         for(int j=0;j<n;j++)
        {
            cin >> a[i][j];
        }
    }
        for(int i=0;i<n;i++)
        {
            int sum =0;
            for(int j=0;i<m;j++)
            {
                sum = sum + a[j][i];
            }
            cout << sum << " ";
        }
}   
