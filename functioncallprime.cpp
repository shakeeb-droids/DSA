#include <iostream>
using namespace std;

bool functionPrime(int n)
{
   int prime=0;
   for(int i=1;i<=n;i++)
   {
      if(n%i==0)
         prime=prime+1;
   }
   if(prime==2)
   {
      return true;
   }
   else
   {
      return false;
   }
}

int main() 
{   
   int n;
   cin >> n;
   cout << functionPrime(n);

 } 
