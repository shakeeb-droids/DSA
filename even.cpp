#include <iostream>
using namespace std;

int main() {
   int n;
   cin >> n;
   int i=1;
   while(i<=n)
   {
   	int j=1;
   	while(j<=n-i)
   	{
   		cout << " ";
   		j=j+1;
   	}
   	int k=1;
   	while(k<=i)
   	{
   		cout << k;
   		k=k+1;
   	}
       int row  = i-1;
       int a=1;
      while(a<i)
      {
         cout << row;
         row--;
         a=a+1;
      }
      cout << endl;
      i=i+1;
   }
}

