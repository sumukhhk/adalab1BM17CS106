#include<iostream>
using namespace std;
int partition(int a[],int low,int high)
{
	int pivot=a[low];
	int i=low+1;
	int j=high;
	while(1)
	{
		while(a[i]<=pivot &&  i<=high)
		{
			i=i+1;
		}
		while(a[j]>pivot && j>=low)
		{
			j=j-1;
		}
		if(i<j)
		{
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		else
		{
			a[low]=a[j];
			a[j]=pivot;
			return j;
		}
	}
}
void quicksort(int a[],int low,int high)
{
	if(low<high)
	{
		int pivot_pos=partition(a,low,high);
		quicksort(a,low,pivot_pos-1);
		quicksort(a,pivot_pos+1,high);
	}
}
int main()
{
	int n;
	cout<<"Enter size";
	cin>>n;
	int a[n];
	cout<<"Enter arrray elements";
	for(int i=0;i<n;i++)
		cin>>a[i];
	clock_t start,end;
	start=clock();
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	end=clock();
	double t=double(end-start)/double(CLOCKS_PER_SEC);
	cout<<t;
	return 0;
}