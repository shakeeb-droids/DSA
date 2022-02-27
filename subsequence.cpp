#include<bits/stdc++.h>
using namespace std;

int subsequence(string input, string output[])
{
	//BASE CASE
	if(input.size()==0)
	{
		output[0] = "";
		return 1; //returned value to no_of_subseq is 1 so it will print only empty of output
	}
	// Smaller recursive calls
	int smallOutput = subsequence(input.substr(1), output);
	//Our Calculation
	//Making a new copy of the called result and add 
	for(int i=0;i<smallOutput;i++)
	{
		output[i+smallOutput] = input[0] + output[i];
	}
	return 2*smallOutput;

}

int main()
{
	string s;
	cin >> s;
	int size = s.size();
	int d = pow(2,size);
	//Output array to store all the subsequences of given string
	 string *output=new string[d];
	 //subsequence fucntion will stroe all substring as well as return the count of substrings
	 int no_of_subseq = subsequence(s, output);
	 for(int i=0;i<no_of_subseq;i++)
	 {
	 	cout << output[i] << endl;
	 }
	 delete [] output;
}

