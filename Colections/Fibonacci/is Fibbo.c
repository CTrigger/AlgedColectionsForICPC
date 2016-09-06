#include <stdio.h>
#include <math.h>

/* Check if n is a Fibonacci number */

int isPerfectSquare(int x) {
    int s = sqrt(x);
    return (s*s == x);
}

/*  Returns true if n is a Fibinacci Number, else false */
int isFibonacci(int n) {
    /*  n is Fibonacci if one of 5*n*n + 4 or 5*n*n - 4 or both is a perferct square */
    if( isPerfectSquare(5*n*n + 4) || isPerfectSquare(5*n*n - 4) )
    	return 1; /*Yes is fibbo*/
    else
    	return 0; /*No isnt fibbo*/
}

int main() {
    int n;
    scanf("%d", &n);
    if(isFibonacci(n))
		printf("Yes\n");
    else 
		printf("No\n");

    return 0;
}
