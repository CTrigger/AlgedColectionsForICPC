#include<stdio.h>
int BinSearch (int x, int v[], int e, int d)
{
 int i = (e + d)/2;
 if (v[i] == x)
    return i;
 if (e >= d)
    return -1; // Não foi encontrado
 else
     if (v[i] < x)
        return BinSearch(x, v, i+1, d);
     else
        return BinSearch(x, v, e, i-1);
}

int main ()
{
	int x[]={0,2,4,6,8,13,15,18,20,25,29,33,40};
	int search = 17;
	if(BinSearch(search,x,0,sizeof(x)) != -1)
		printf("position %d \nvalue %d\n",BinSearch(search,x,0,sizeof(x)),x[BinSearch(search,x,0, sizeof(x))]);
	else
		printf("not founded %d in array\n",search);
	return 0;
}
