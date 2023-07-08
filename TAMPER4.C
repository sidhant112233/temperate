#include<stdio.h>
#include<conio.h>
void main()
{
	int id,fd,n,sum=0;
	clrscr();

	printf("Enter a numbe find sum of fd and id :");
	scanf("%d",&n);

	id=n%10;
	while(n>10)
	{
	  n=n/10;
	}
	printf("\n sum eof rand id digit=%d \t",sum);

	getch();
}