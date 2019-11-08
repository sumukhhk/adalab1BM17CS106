
#include<bits/stdc++.h> 
using namespace std; 
  

int minCoins(int coins[], int m, int V) 
{ 
   int res = INT_MAX; 
   if (V == 0) 
      return 0; 

  
   for (int i=0; i<m; i++) 
   { 
     if (coins[i] <= V) 
     { 
         int sub_res = minCoins(coins, m, V-coins[i]); 
         if (sub_res != INT_MAX && sub_res + 1 < res) 
            res = sub_res + 1; 
     } 
   } 
   return res; 
} 



  

int main() 
{ 
    int coins[10], m, i, V; 
    cout<<"Enter the coins available : ";
    cin>>m;
    cout<<"\nEnter the coins values : ";
    for(i=0; i<m; i++)
    cin>>coins[i];
    cout<<"\nEnter the total value : ";
    cin>>V; 
    cout << "\nMinimum coins required is " << minCoins(coins, m, V) <<endl; 
    cout<<coin[sub_res[v]];
    
    return 0; 
} 

