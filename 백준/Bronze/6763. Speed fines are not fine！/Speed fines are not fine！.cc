#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d\n%d",&a,&b);
	c=b-a;
	if (c<1) printf("Congratulations, you are within the speed limit!");
	else if (c>=1&&c<=20) printf("You are speeding and your fine is $100.");
	else if (c>=21&&c<=30) printf("You are speeding and your fine is $270.");
	else printf("You are speeding and your fine is $500.");
	
	
	return 0;
}