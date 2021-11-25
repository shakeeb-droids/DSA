#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	int dup = INT_MIN;
	int max=a[0];
	int sec_largest=INT_MIN;
	for(int i=0;i<n;i++)
	{

		if(a[i]>max)
		{
			sec_largest = max;
			max = a[i];

		}
		else if(a[i]>sec_largest && a[i]!=max)
		{
			sec_largest=a[i];
		}
		
		
	}
	
	cout << sec_largest <<endl;
}
	// for(int i=0;i<n;i++)
	// {
	// 		if(a[i]>max)
	// 		{
	// 		 max= a[i];
	// 		 max_index=i;
	// 		}
	// }
	//  a[max_index] = INT_MIN;
	// int sec_largest = 0;
	// for(int i=0;i<n;i++)
	// {
	// 	if(a[i]>sec_largest)
	// 	{
	// 		sec_largest = a[i];
	// 	}
	// }
	
