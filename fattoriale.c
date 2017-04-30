#include <stdio.h>

//short way to implement (no dinamic programming feature added
/*
long int fattoriale(int n) {
    return n == 0 ? 1 : fattoriale(n-1) * n;	
}
*/

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
