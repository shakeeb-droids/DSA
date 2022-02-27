#include<bits/stdc++.h>
using namespace std;

void  subseq(string s, string output)
{
	//BASE CASE
	if(s.empty())
	{
		cout << output << endl;
		return;
	}
	//Recursive calls
	//Call to not include the first element
	subseq(s.substr(1), output);
	//Call to include the firsrt element
	subseq(s.substr(1), output + s[0]);
}
int main()
{
	string s;
	cin>>s;
	string output;
	subseq(s, output);
	cout << output << endl;
}