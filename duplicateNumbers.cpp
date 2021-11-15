#include <iostream>
using namespace std;
int duplicateNumber(int *arr, int size)
{
    //Write your code here
    int duplicate;
    
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                duplicate = arr[j];
                break;
                
            }
        
        }


    }
return duplicate;
   
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

		cout << duplicateNumber(input, size) << endl;
	}

	return 0;
}
