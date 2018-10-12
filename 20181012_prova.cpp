/*
1) funzione che dato un un numero N
restituisca la somma di tutti primi N
numeri naturali.

5 -> 5+4+3+2+1
7 -> 7+6+5+4+3+2+1
3 -> 3+2+1

2) fare la funzione del punto 1
in maniera ricorsiva
*/
#include <stdio.h>

int somma(int n);

int main(){
	printf("%d",somma(5));
	
	return 0;
}

int somma(int n)
{
	int s=0,i;
	for(i=1;i<=n;i++)
		s+=i;
	return s;
	/*
	int s=n;
	while(--n>0)
		s+=n;
	return s;
	*/
}
