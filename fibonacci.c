#include <stdio.h>

int fibonacci(int n)
{
	if (n<=1)
		return n;
	else		
		return (fibonacci(n-1)+fibonacci(n-2));
}

void main(){
	int i;
	 scanf("%d", &i);
	printf("%d -> %d\n", i, fibonacci(i));
}
