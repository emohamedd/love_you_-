#include <stdio.h>


int main()
{
	int i  = 0;
	char str[10];
	printf("what is Your name\n");
		scanf("%s", str);
	printf("How Much DO you love me (1-10):\n");
		scanf("%d", &i);
	if (i <= 0)
{

		printf("Don't Need your love\n");
		return 0;
}
	else
		printf("I LOve you Very\n");
	while(i > 0)
	{
		printf("\t   Very\n");
		i--;
	}
	printf("\tMuch %s\n\n", str);
	return (0);
}
