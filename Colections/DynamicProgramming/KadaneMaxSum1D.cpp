#include <stdio.h>
int start = 0, end = 0, sum = 0;

/*  Find the sum of contiguous subarray within a one-dimensional array of numbers which has the largest sum.
    Input:  {31, -41, 59, 26, -53, 58, 97}
    Output: 187 (index 2 to 6) */

void kadane(int a[], int size_a) {
    int limit = 0, i, f, n;
	printf("Start: %d\nEnd: %d\nSum: %d\n\n", start, end, sum);
    for(f = 0; f < size_a; f++ ) {
    	printf("a[f]%d\n\n",a[f]);
        if( limit + a[f] < 0 ) {
            i = f + 1;
            limit = 0;
            printf("limit:%d + a[f]:%d\n\n",limit,a[f]);
        } 
		else 
			limit = limit + a[f];

        if( limit > sum ) {
            sum = limit;
            start = i;
            end = f;
        }
        printf("f:%d\nlimit:%d\nStart: %d\nEnd: %d\nSum: %d\n\n",f,limit, start, end, sum);
    }
}

int main() {
    int a[] = {31, -41, 59, 26, -53, 58, 97};
	start = 0;
    kadane(a, sizeof(a)/sizeof(a[0]));
    printf("Start: %d\nEnd: %d\nSum: %d", start, end, sum);

    return 0;
}
