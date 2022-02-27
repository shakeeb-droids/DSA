#include<bits/stdc++.h>
using namespace std;
int knapsack(int* weights, int* values, int n, int maxWeight) {
	
    //BASE CASE
	if(n==0 || maxWeight==0)
        return 0;
   //Weight can be greater so we dotn include it
    if(weights[0]>maxWeight)
    { 
        return knapsack(weights+1, values+1 , n-1, maxWeight);
    }
       
    //Include
    //By taking the next part of the weight array along with its corresponding value
    int option1 = values[0] + knapsack(weights+1, values+1, n-1, maxWeight-weights[0]);
        //Exclude
    int option2 = knapsack(weights+1, values+1 , n-1, maxWeight);
    int ans = max(option1, option2);
    return ans;
}
#include <cstring>
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int* wt = new int[n];
    int* val = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> wt[i];
    }

    for (int j = 0; j < n; j++) {
        cin >> val[j];
    }

    int w;
    cin >> w;

    cout << knapsack(wt, val, n, w) << "\n";

    delete[] wt;
    delete[] val;
}