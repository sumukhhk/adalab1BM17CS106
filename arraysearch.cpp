#include<iostream>
#include<stdio.h>
using namespace std;
int main(int argc,char** argv)
{
	int n,s,k,a[50],f=0;
	cout<<"Enter the no of test cases";
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cout<<"Enter the size of the array";
	cin>>s;
	cout<<"Enter the element to be searched";
	cin>>k;	
	cout<<"Enter the array elements";
	for(int i=0;i<s;i++)
		cin>>a[i];
	for(int i=0;i<s;i++)
		if(a[i]==k)
			f=1;
	if(f==1)cout<<"1";
	else cout<<"-1";
	}
	return 0;
}
