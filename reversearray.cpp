#include<iostream>
using namespace std;
int reverse(int a[],int n)
{
    int i=0;
    int last_index = n-1;
    while(i<n/2)
    {
        int old;
        old = a[i];
        a[i] = a[last_index - i];
        a[last_index - i] = old;

        i++;
    }
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    reverse(a,n);
}