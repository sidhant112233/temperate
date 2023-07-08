#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r=0,c,s;
	clrscr();

	printf("Enter a numbe =");
	scanf("%d",&n);

	s=n%10;
	while(c>0)
	{
	  s=c%10;
	  r=(r*10)+s;
	  c=c/10;
	}
	if(n==0)
	{
	printf("%d is palindom \n",n);
	}
	else
	{
	printf("%d is not palindom \n",n);
	}
	getch();
}