#include<iostream>
#include<math.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int count=0;
    int sum =0;
    for(int i=n;i>0;i=i/10)
    {
       int rem = i%10;
        if(rem==0)
        {
            count =count +1;
            continue;
        }
        else if(rem==1)
        sum = sum + pow(2,count);
        count =count+1;
    }
    cout << sum <<endl;
    
}
