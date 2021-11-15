#include <iostream>
using namespace std;

void swapAlternate(int *arr, int size)
{
    //Write your code here
    int swap=1;
    int swap_two;
    int temp;
    for(int i=0;i<size-1;i=i+2)
    {
    	swap=swap+i;
        if(i<swap)
        {
        	
        	temp = arr[i];
        	arr[i] = arr[i+1];
        	arr[i+1] = temp;
        	
        }
        swap=1;
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;
		cin >> size;
		int *arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		swapAlternate(arr, size);
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}
}