#include <iostream>
using namespace std;
int main() 
{   
   int n;
   cin >> n;
   int prime =2;
   for(int i=1;i<n;i++)
   {
      if(n%i==0)
      { 
      cout << "not prime" <<endl;
      break;
      }
      else{
         cout << " prime" << endl;
         break;
      }
 } 
}