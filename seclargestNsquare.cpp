#include <iostream>
#include<climits>
using namespace std;

int findSecondLargest(int *input, int n)
{
    //Write your code here
   
    long dup = INT_MIN;
	int max=0;
	int max_index;
    if(n==1)
    {
        return dup;
    }
else  // Remove the duplicates if present
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(input[i]==input[j])
			{
				input[j] = dup;
				
			}
		}
	}
    // find the largest
    for(int i=0;i<n;i++)
	{
			if(input[i]>max)
			{
			 max= input[i];
			 max_index=i;
			}
	}
    //Sec Largest begins
     input[max_index] = INT_MIN; //largest element replaced
	long sec_largest = INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(input[i]>sec_largest)
		{
			sec_largest = input[i];
		}
	}
		return sec_largest;
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
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}