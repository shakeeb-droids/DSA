#include<iostream>
using namespace std;

long long int sumOrProduct(long long int n, long long int q)
{
   if(q==1)
    {
        long long int sum=0;
        for(int i=1;i<=n;i++)
        {
          sum = sum + i;    
        }
         return sum;
    }
    else 
    {
        long long int prod=1;
        for(int i=1;i<=n;i++)
        {
          prod = prod * i;   
        }
        return prod;
    }
}
int main()
{
    long long int n,q;
    long int t;
    cin >> t;
    while(t--)
    {
    cin >> n >> q;
    int ans = sumOrProduct(n,q);
    cout << ans  << endl;
    }
}