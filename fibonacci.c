#include <stdio.h>

//Recursive approach is not so efficient when talking about fibonacci
//here a purpose of an iterative solution
int fibonacci_iterative(int n) {
  int a = 0;
  int b = 1, c = 1;
  if(n <= 1)
    return 0;
  else if (n <= 3)
    return 1;
  else {
    n -= 3;
    while(n > 0) {
      a = b;
      b = c;
      c = a + b;
      n--;
    }
    return c;
  }
}

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
