#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 *main - Entry point
 *
 *Description: print value of n satus; zero, positive or negative
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int m = n%10;
	if(m>5)
	{
		printf("Last digit of %d is %d and is less than %d and not %d\n",n,m,6,0);
	}
	else if(m==0)
	{
		printf("Last digit of %d is %d and is %d\n",n,m,0);
	}
	else if((m !=0) && (m < 6))
	{
		prinf("Last digit of %d is %d and is less than %d and not %d\n",n,m,6,0);
	}
	return (0);
}
