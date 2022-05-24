#include<stdio.h>

int main()
{
	int a[10] = {0};
	int n;
	
	printf("\nEnter a number - ");
	scanf("%d", &n);

	while(n>0)
	{
		int rem =n%10;
		if(a[rem] == 1)
		{
			break;
		}
		a[rem]=1;
		n=n/10;
	}

	if(n>0)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	
	return 0;
}


