#include<stdio.h>
int main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	if(num < 0)
	printf("negative number");
	else if(num > 0)
	printf("positive number");
	else
	printf("you entered 0.");
	return 0;
}
