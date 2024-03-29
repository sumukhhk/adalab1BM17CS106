#include<iostream>
using namespace std;
int a[100][100];
int n;
void order()
{
    cout<<"Order of tasks : "<<endl;
    int indegree[100],k,s[100],top=-1;
    for(int i=0;i<n;i++){
        indegree[i]=0;
        for(int j=0;j<n;j++){
            indegree[i] +=a[j][i];
        }
    }
    for(int i=0;i<n;i++){
            if(indegree[i]==0){
                s[++top]=i;
            }
    }
    while(top!=-1 ){
            k=s[top--];
            cout<<k<<" ";
            indegree[k]=-1;
            for(int r=0;r<n;r++){
                if(a[k][r]==1){
                    indegree[r] -=1;
                    if(indegree[r]== 0){
                        s[++top]=r;
                    }
                }
            }
    }
    cout<<endl;
}
int main(){
    int p,q,d;
        a[n][n] = {0};
        cout<<"Enter no. of tasks : "<<endl;
        cin>>n;
        cout<<"Enter no. of dependencies : "<<endl;
        cin>>d;
        cout<<"Enter the dependencies  : "<<endl;
        for(int i=0;i<d;i++)
        {
            cin>>q;
            cin>>p;
            a[p][q] = 1;
        }
        order();

}

/* OUTPUT
Enter no of tasks:
7
Enter no of dependencies:
12
Enter the dependencies:
0 1
0 2
1 4
1 6
2 5
3 0
3 1
3 2
3 5
3 6
6 4
6 5

Order of tasks: 5 2 4 6 1 0 3
*/
