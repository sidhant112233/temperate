#include<stdio.h>
#include<conio.h>
void main()
{
	int r=1,i,s=1;
	clrscr();

	printf("Enter a value =");
	scanf("%d",&i);

	for(i;r<=i;r++)
	s=s*r;

	{

	printf("s=%d \n",s);
	}
	getch();
}