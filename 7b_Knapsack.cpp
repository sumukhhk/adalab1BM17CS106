#include <iostream>
using namespace std; 
int max(int a, int b) 
{ 
	return (a > b)? a : b; 
} 
int knapSack(int W, int wt[], int val[], int n) 
{ 
int i, j; 
int K[n+1][W+1]; 
for (i = 0; i <= n; i++) 
{ 
	for (j = 0; j <= W; j++) 
	{ 
		if (i==0 || j==0) 
			K[i][j] = 0; 
		else if (wt[i-1] <= j) 
				K[i][j] = max(val[i-1] + K[i-1][j-wt[i-1]], K[i-1][j]); 
		else
				K[i][j] = K[i-1][j]; 
	} 
} 
int res = K[n][W];     
    cout<<"Maximum Profit: "<<res<<endl;
    j = W; 
	cout<<"Weights of items included: ";
    for (i = n; i > 0 && res > 0; i--)  
	{    
        if (res == K[i - 1][j])  
            continue;         
        else 
		{
            cout<<wt[i - 1]<<" ";
            res = res - val[i - 1]; 
            j= j- wt[i - 1]; 
        } 
    } 
} 
int main() 
{ 
	int val[10],wt[10],W,n;
	cout<<"Enter the no of items:"<<endl;
	cin>>n;
	cout<<"Enter the values:"<<endl;
	for(int i=0;i<n;i++)
		cin>>val[i];
	cout<<"Enter the weights:"<<endl;
	for(int i=0;i<n;i++)
		cin>>wt[i];
	cout<<"Enter the knapsack capacity: "<<endl;
	cin>>W;
	knapSack(W, wt, val, n); 
	return 0; 
} 


/*
OUTPUT
Enter the no of items:
5
Enter the values:
25 20 15 40 50       
Enter the weights:
3 2 1 4 5
Enter the knapsack capacity: 
6
Maximum Profit: 65
Weights of items included: 5 1 
*/
