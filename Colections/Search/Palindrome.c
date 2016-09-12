#include<stdio.h>
#include<string.h>

#define max 1001

int palindrome(char array[],int init ,int size){
	if (init >= size)
		return 1;
		
	if(array[init] == array[size])
		return palindrome(array, init+1, size-1);
	else
		return -1;
}


int main ()
{
	char p[max];
	scanf("%s",p);
	int ans = palindrome(p,0,strlen(p)-1);
	
	if(ans == -1)
		puts("False");
	else
		puts("True");
	
	
	return 0;
}
