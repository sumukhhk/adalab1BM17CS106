#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	int n,temp,k,min;
	cout<<"Enter the array length:";
	cin>>n;
	int a[n];
	cout<<"Enter the array elements:";
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter which smallest term you want to compute";
	cin>>k;
	clock_t start,end;
	start=clock();
	for(int i=0;i<n-1;i++)
		{min=i;
		for(int j=i+1;j<n;j++)
			{if(a[j]<a[min])
				min=j;
			}
		temp=a[min];
		a[min]=a[i];
		a[i]=temp;
		}
	
	cout<<endl<<"The "<<k<<" smallest term is: "<<a[k-1]<<endl;
	end=clock();
	double t=double(end-start)/double(CLOCKS_PER_SEC);
	cout<<t;
	return 0;
}


