#include <iostream>
#include<time.h>
using namespace std;
int binaryroot()
{
	int low=0,high,mid,n,ans;
	cout<<"Enter the number";
	cin>>n;
	high=n-1;
	while(low<=high)
	{
	 mid=(low+high)/2;
	 if((mid*mid)==n)
		return mid;
	else if((mid*mid)<n)
		{low=mid+1;
		 ans=mid;
		}
	else
  		high=mid-1;
	}
	return ans;

}
int main()
{
	clock_t start,end;
	start=clock();
	int x=binaryroot();
	cout<<"The square root is "<<x<<endl;
	end=clock();
	double t=double(end-start)/double(CLOCKS_PER_SEC);
	cout<<t;
	return 0;
}
