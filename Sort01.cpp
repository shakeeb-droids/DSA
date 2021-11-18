#include <iostream>
#include <algorithm>
using namespace std;
void sortZeroesAndOne(int *input, int size)
{
    //Write your code here
    int count0 = 0;
    int count1 =0;
    for(int i=0;i<size;i++)
    {
        if(input[i]==0)
        {
            count0=count0+1;
		}
        else
        {
            count1=count1+1;
        }
    }
    int j=0;
    for(;j<count0;j++)
    {
        input[j] = 0;
    }
    
    for(int k=j; k<size; )
    {
        input[k] = 1;
        k++;
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

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		sortZeroesAndOne(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}