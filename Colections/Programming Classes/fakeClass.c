#include <stdio.h>
#include <string.h>

typedef struct 
{
	float a;
	float b;
	
	float soma;
	float sub;
	float mult;
	float div;
}math;

math new_math(float w, float z)
{
	math x = {w,z};
	
	x.soma = x.a + x.b;
	x.sub = x.a - x.b;
	x.mult = x.a * x.b;
	x.div = x.a /x.b;
	
	return x;
}


int main() 
{
	float input1;
	float input2;
	
	
	puts("inserir o valor 1 e 2");
	scanf("%f %f",&input1,&input2);
	
	math x = new_math(input1,input2);
	
	printf("soma = %.3f\n",x.soma);
	printf("sub = %.3f\n",x.sub);
	printf("mult = %.3f\n",x.mult);
	printf("div = %.3f\n",x.div);
	
	return 0;
}
