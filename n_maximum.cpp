#include <stdio.h>
int main(int argc, char **argv)
{
	int n,a[100];
	printf("Enter the number of intergers");
	scanf("%d",&n);
	printf("Enter the integers");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int max=a[0];
	for(int i=0;i<n;i++)
		if(a[i]>max)
			max=a[i];
	printf("The maximum of the integers is: %d ",max);
	return 0;
}
