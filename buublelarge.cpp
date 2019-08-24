#include<iostream>
using namespace std;
int main()
{
	int n,temp,k;
	cout<<"Enter the array length: ";
	cin>>n;
	int a[n];
	cout<<"Enter the array elements: ";
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter till which term you want to compute the largest term: ";
	cin>>k;
	clock_t start,end;
	start=clock();
	for(int i=0;i<n-1;i++)
		{for(int j=0;j<n-1-i;j++)
			{if(a[j+1]>a[j])
				{temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				}
			}
		}
	cout<<"The sorted array is:";
	for(int i=0;i<n;i++)
		cout<<a[i]<<",";
	cout<<endl<<"The "<<k<<" largest array elements are"<<endl;
	for(int i=0;i<k;i++)
		cout<<a[i]<<",";
	end=clock();
	double t=double(end-start)/double(CLOCKS_PER_SEC);
	cout<<endl<<t<<" is the time taken";
	return 0;
}
