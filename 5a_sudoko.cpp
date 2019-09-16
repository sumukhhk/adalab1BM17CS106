#include<iostream>
#include<math.h>
using namespace std;
int grid[100][100];
int N,SQN;
bool usedInRow(int row,int num){
    for(int col=0;col<N;col++){
        if(grid[row][col] == num)
            return true;
    }
    return false;
}
bool usedInColumn(int col,int num){
    for(int row=0;row<N;row++){
        if(grid[row][col] == num)
            return true;
    }
    return false;
}
bool usedInBox(int boxStartRow,int boxStartCol, int num){
    for(int row=0;row< SQN;row++){
        for(int col =0;col<SQN;col++){
            if(grid[row+boxStartRow][col+boxStartCol] == num){
                return true;
            }
        }
    }
    return false;
}
bool isSafe(int row,int col,int num){
    return(!usedInRow(row,num) && !usedInColumn(col,num) && !usedInBox(row-row%SQN,col-col%SQN,num));
}
bool findUnassignedLocation(int *row, int *col){
    for(int i =0;i<N;i++){
        for(int j =0;j<N;j++){
            if(grid[i][j] == 0){
                *row = i;
                *col = j;
                return true;
            }
        }
    }
    return false;
}
bool solveSuduko(){
    int row,col;
    if(!findUnassignedLocation(&row,&col)){
        return true;
    }
    for(int num=1;num<=N;num++){
        if(isSafe(row,col,num)){
            grid[row][col] = num;
            if(solveSuduko()){
                return true;
            }
            grid[row][col] = 0;
        }
    }
    return false;
}
int main()
{
    cout<<"Enter Sudoku size(perfect square within 100):"<<endl;
    cin>>N;
    cout<<"Enter Sudoku elements:"<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>grid[i][j];
        }
    }
    SQN = sqrt(N);
     bool t = solveSuduko();
    cout<<endl<<"Solution:"<<endl;
     if(t){
     for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    else
    {
        cout<<"No Solution";
    }
return 0;
}


/*OUTPUT:

Enter Sudoku size(perfect square within 100):9
Enter Sudoku elements:
0 0 0 0 0 0 2 0 0
0 8 0 0 0 7 0 9 0
6 0 2 0 0 0 5 0 0
0 7 0 0 6 0 0 0 0
0 0 0 9 0 1 0 0 0
0 0 0 0 2 0 0 4 0
0 0 5 0 0 0 6 0 3
0 9 0 4 0 0 0 7 0
0 0 6 0 0 0 0 0 0

Solution:
9 5 7 6 1 3 2 8 4
4 8 3 2 5 7 1 9 6
6 1 2 8 4 9 5 3 7
1 7 8 3 6 4 9 5 2
5 2 4 9 7 1 3 6 8
3 6 9 5 2 8 7 4 1
8 4 5 7 9 2 6 1 3
2 9 1 4 3 6 8 7 5
7 3 6 1 8 5 4 2 9

*/
