#include <iostream>
using namespace std;

int tripletSum(int *input, int size, int x)
{
	//Write your code here
    int temp;    
    for(int i=0; i<size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            //If there is a smaller element found on right of the array then swap it.
            if(input[j] <=input[i])
            {
                temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }
    int sum=0;
    int count=0;
     for(int i=0;i<size;i++)
    {
         int j=i+1;
        for(;j<size;)
        {
            for(int k=j+1;k<size;k++)
            {
            	sum = input[i] + input[j] +input[k];
            	if(sum==x)
                {
                    count=count+1;
                   

                }
        	}
            j++;
    	}
     }
    return count;
    
	}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		cin >> x;

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}