#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int x)
{
    int pos =-1;
    int f=0;
    for(int i=0;i<n;i++)
    {
        
        if(arr[i]==x)
        {
            pos = i;
            f=1;
            break;
        }

    }
      if(f==1)
        return pos;
    else
    	return -1;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int *arr = new int[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
		int val;
		cin >> val;
		cout << linearSearch(arr, n, val) << endl;
	}
	return 0;
}