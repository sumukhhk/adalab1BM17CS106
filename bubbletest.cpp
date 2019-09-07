#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	int n,temp,k,count=0;
	cout<<"Enter the array length: ";
	cin>>n;
	int a[n];
	cout<<"Enter the array elements: ";
	for(int i=0;i<n;i++)
		cin>>a[i];
	clock_t start,end;
	start=clock();
	for(int i=0;i<n-1;i++)
		{for(int j=0;j<n-1-i;j++)
			{count++;
			if(a[j]>a[j+1])
				{temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				
				}
			}
			
		}
		cout<<"Count: "<<count*count1<<endl;
		end=clock();
	double t=double(end-start)/double(CLOCKS_PER_SEC);
	cout<<endl<<t;
	return 0;
}
