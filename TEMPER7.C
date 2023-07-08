#include<stdio.h>
#include<conio.h>
void main()
{
	int r=0,i=1,n,t,a;
	clrscr();

	printf("Enter a value =");
	scanf("%d",&n);

	for(a;r<=n;r++)
	{
	t=r+i;
	r=i;
	i=t;

	printf("%d \n",t);
	}
	getch();
}