#include<stdio.h>

int main()
{
	int a;
	printf("\nEnter elements of 1-D Array ");
	scanf("%d",&a);
	
	int b[a];
	printf("\nEnter elements - ");
	for(int i=1; i<=a; i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\n");
	for(int i=1; i<=a; i++)
	{
		if(b[i] == 2)
		{
			printf("option 2");
		}
		else
		{
			printf("%d", b[i]);
		}
		printf("\n");
	}
	return 0;
}
