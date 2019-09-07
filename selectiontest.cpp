#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	int n,temp,k,min,count=0;
	cout<<"Enter the array length:";
	cin>>n;
	int a[n];
	cout<<"Enter the array elements:";
	for(int i=0;i<n;i++)
		cin>>a[i];

	clock_t start,end;
	start=clock();
	for(int i=0;i<n-1;i++)
		{min=i;
		for(int j=i+1;j<n;j++)
			{count++;
			if(a[j]<a[min])
				min=j;
				
			}
		temp=a[min];
		a[min]=a[i];
		a[i]=temp;
		
		}
		cout<<"Count:"<<count<<endl;
	end=clock();
	double t=double(end-start)/double(CLOCKS_PER_SEC);
	cout<<t<<" is the time taken";
	return 0;
}
