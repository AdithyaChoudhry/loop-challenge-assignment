#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the number of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<i*2;j++)//multiplying i*2 
		printf("%d",j%2);
	{
		printf("\n");
	}
	}
}
