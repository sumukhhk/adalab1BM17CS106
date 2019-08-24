#include<iostream>
using namespace std;
int main()
{
	int n,temp,k;
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
		{for(int j=0;j<n-1-i;j++)
			{if(a[j+1]<a[j])
				{temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				}
			}
		}
	cout<<"The sorted array is:";
	for(int i=0;i<n;i++)
		cout<<a[i]<<",";
	for(int i=0;i<n;i++)
		{if(i==k)
			cout<<endl<<"The "<<k<<" smallest term is: "<<a[k-1]<<endl;
		}
	end=clock();
	double t=double(end-start)/double(CLOCKS_PER_SEC);
	cout<<t<<" is the time taken";
	return 0;
}

