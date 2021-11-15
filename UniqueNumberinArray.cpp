#include <iostream>
using namespace std;

int findUnique(int *arr, int size)
{
   
    int unique;
  
       for(int i=0;i<size;i++)
        {
           int count =0;
        for(int j=i+1;j<size;j++)
        {
             if(arr[i]==arr[j])
            {
               arr[j]=0;
               arr[i] = 0;
            }
                
         }
       }
           for(int i=0;i<size;i++)
           {
               if(arr[i]!=0)
               {
                   return arr[i];
               }
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

		cout << findUnique(input, size) << endl;
	}

	return 0;
}