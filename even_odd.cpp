#include<stdio.h>
int main()
{
	int asd;
	printf("Enter a number:");
	scanf("%d",&asd);
	if (asd%2== 0)
	{
		printf("this is a odd number:%d",asd);
	}
	else
	{
		printf("this is even number:%d",asd);
	}
	return 0;
}
