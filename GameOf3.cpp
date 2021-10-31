#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      int n;
      cin >> n;
      int a[n];
      for(int i=0;i<n;i++)
      {
         cin >> a[i];
      }
      // a.sort();
      int pairOftwo =0;
      int pairOfthree =0;
         for(int i=0;i<n;i++)
         {
            for(int j=i+1;j<n;j++)
         {
            if((a[i]+a[j])%3==0)
            {
               pairOftwo++;
            }
         }
         } 
      for(int i=0;i<n;i++)
      {
         for(int j=i+1;j<n;j++)
      { 
         for(int k=j+1;k<n;k++)
         {
             if((a[i]+a[j]+a[k])%3==0)
             {
                  pairOfthree++;
             }
         }
      }
      }
      cout << pairOftwo + pairOfthree << endl;
      
     }
 }