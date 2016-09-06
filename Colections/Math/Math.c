#include<stdio.h>
int fatorial(int x)
{
	if (x > 0)
		return x*fatorial(x-1);
	return 1;
}

double nCr(int x, int y)
{
	return (fatorial(x)) / ( fatorial(y) * fatorial (x-y) );
}


int main ()
{
	printf("%f",nCr(6,5));
	return 0;
}
