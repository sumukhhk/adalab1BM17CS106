#include<iostream>
#define ROW 50
#define COL 50
using namespace std;
int M[ROW][COL],n1,n2;
bool visited[ROW][COL];
int isSafe(int row,int col)
{   return ((row>=0)&&(row<n1)&&(col>=0)&&(col<n2)&&(M[row][col]&& !visited[row][col]));
}
void DFS(int row,int col)
{
        int rowNbr[]={-1,-1,-1,0,0,1,1,1};
        int colNbr[]={-1,0,1,-1,1,-1,0,1};
        visited[row][col]=true;
        for(int k=0;k<8;k++)
        {
        if(isSafe(row+rowNbr[k],col+colNbr[k]))
         {
            DFS(row+rowNbr[k],col+colNbr[k]);
          }
        }
}
    int countIslands()
    {
        int count=0;
        for(int i=0;i<n1;++i)
        {
          for(int j=0;j<n2;++j)
          {
            if(M[i][j] && !visited[i][j])
            {
            DFS(i,j);
            ++count;
            }
          }
        }
        return count;
    }
int main()
{
   cout<<"Enter the no of rows and columns:"<<endl;
    cin>>n1>>n2;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
        visited[i][j]=false;
    }
    }
    cout<<"Enter the adjacency matrix";
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>M[i][j];
            }
    }
    
    int n=countIslands();
    cout<<"No of islands: "<<n;
    return 0;
}

/* output
Enter the no of rows and columns:
7
7
Enter the adjacency matrix: 
0 1 1 1 1 0 0
1 0 0 1 0 0 0
1 0 0 0 0 0 1
1 1 0 0 0 1 0
0 0 0 0 0 0 1
0 1 0 1 0 0 0
0 0 1 0 1 0 0
No of islands: 3
*/
