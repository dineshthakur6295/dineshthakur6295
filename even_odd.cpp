#include<stdio.h>
int main()
{
	// declared_variable
	
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	//condition_
	
	if (num%2== 0)
	{
		printf("this is a odd number:%d",num);
	}
	else
	{
		printf("this is even number:%d",num);
	}
	return 0;
}
