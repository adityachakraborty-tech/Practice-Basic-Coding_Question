#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	if (num % 2 == 0)
	{
		printf("Num is a Even", num);
	}
	else
	{

		printf("Num is a odd", num);
	}
}