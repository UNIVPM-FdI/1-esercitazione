#include <stdio.h>

long int fattoriale(int n){
	if (n==0){
		return 1;
	}
	else{
		return fattoriale(n-1)*n;
	}
}

void main(){
	long int i;
	 scanf("%d", &i);
	printf("%d! -> %d\n", i, fattoriale(i));
}