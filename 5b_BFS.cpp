#include<iostream.h>
#include<time.h>
using namespace std;
int adj[10][10],n,v[10];
void BFS(int k)
{
    queue <int> q;
    v[k-1]=1;
    cout<<"Graph Traversal:";
    cout<<"\n"<<k;
    q.push(k-1);
    while(!q.empty())
       {
        int f= q.front();
        q.pop();
        for(int i=0;i<n;i++)
         {
            if(adj[f][i]==1)
            {
             if(v[i]==0)
             {
                q.push(i);
                v[i]=1;
                cout<<","<<i+1;
             }
            }
         }
      }
}
int main()
{
    clock_t start,end;
    cout<<"Enter the number of vertices:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
        v[i]=0;
    cout<<"Enter adjacent matrix:"<<endl;
    for(int i=0;i<n;i++)
    {
         for(int j=0;j<n;j++)
            cin>>adj[i][j];
    }
    int s;
    cout<<"Enter the starting vertex:\n";
    cin>>s;
    start=clock();
    BFS(s);
    end=clock();
    double t=double(end-start)/double(CLOCKS_PER_SEC);
    cout<<endl<<t;
    return 0;
}

/*
Enter the number of vertices:
6
Enter adjacent matrix:
0 0 1 1 1 0
0 0 0 0 1 1
1 0 0 1 0 1
1 0 1 0 0 0
1 1 0 0 0 1
0 1 1 0 1 0
Enter the starting vertex:
1
Graph Traversal:
1,3,4,5,6,2
3.2e-05
*/

