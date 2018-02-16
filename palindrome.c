#include<stdio.h>
#include<conio.h>
void main()
{
	int n, t=0, rem=0, r=0;
	printf("enter the number which is less than 1000000");
	scanf("%d",&n);
	t=n;
	
	while(t!=0)
	{
		rem=t%10;
		t=t/10;
		r=(r*10)+ rem;
	}
	
	printf("%d", r);
	
	if(r==n)
	{
		printf("YES");
	}
	
	else
	{
		printf("NO");
	}
	
	getch();
}
