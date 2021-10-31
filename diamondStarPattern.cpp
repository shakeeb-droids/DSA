#include <iostream>
using namespace std;   
int main()
{
    int n;
    cin >> n;
   int first_half = (n/2) + 1;
   for(int i=1;i<=first_half;i++)
   {
         for(int sp=1;sp<=first_half-i;sp++)
         {
            cout << " ";
            
         }    
         for(int j=1;j<=i;j++)
         {
            cout << "*";      
         }
         for(int j=1;j<i;j++)
         {
            cout << "*";      
         }  
         cout<< endl; 
   }
   int sec_half =n/2;
   for(int k=1;k<=sec_half;k++)
   {
      for(int sp=1;sp<=k;sp++)
      {
         cout << " ";
      }
      for(int i=k;i<=sec_half;i++)
      {
         cout << "*";
      }
      for(int j=k;j<sec_half;j++)
      {
         cout << "*";
      }
      cout << endl;
   }
}