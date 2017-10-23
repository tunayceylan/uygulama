#include <stdio.h>
#include <conio.h>
main()
{
	int a,b,c,i;
	printf("Enter The First Number: ");
	scanf("%d", &a);
	printf("Enter The Second Number: ");
	scanf("%d",&b);
	printf("\n\n");
	printf("MENU\n");
	printf("---------\n");
	printf("1.+\n");
	printf("2.-\n");
	printf("3.X\n");
	printf("Enter Your Preference (1-2-3): ");
	scanf("%d",&i);
	printf("\n\n");
	if(i==1)
	{
		c=a+b;
		printf("Answer:%d\n", c);
	}
	else if(i==2)
	{
		c=a-b;
		printf("Answer:%d\n", c);
	}
	else if(i==3)
	{
		c=a*b;
		printf("Answer:%d\n", c);
	}
	else
	printf("Enter 1, 2 or 3.\n");
	getch();
}
