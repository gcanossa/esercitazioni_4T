/*
1) funzione che dato un un numero N
restituisca la somma di tutti primi N
numeri naturali.

5 -> 5+(4+3+2+1)
4 -> 4+(3+2+1)
7 -> 7+6+5+4+3+2+1
3 -> 3+2+1

n+(n-1)
0 -> 0

5 -> 5+(4+(3+(2+(1+(0)))))

2) fare la funzione del punto 1
in maniera ricorsiva

SPIEGAZIONE RICORSIONE CON FATTORIALE
5! = 5*4*3*2*1 => 5*4! => 5*(4*3*2*1)
4! = 4*3! => 4*(3*2*1)

n*(n-1)! 0!

n*(n-1)/2

4 1 = 5
3 2 = 5
2 3 = 5
1 4 = 5

*/
#include <stdio.h>

int somma(int n);
int sommaRic(int n);
int fattoriale(int n);

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

int sommaRic(int n){
	if(n==0)
		return 0;
	else
		return n+sommaRic(n-1);
}

/*
	int a = sommaRic(3); => 3+2+1=6
	1) 3+sommaRic(2) => 3+(2+1)=6
	2) 2+sommaRic(1) => 2+(1+0)
	3) 1+sommaRic(0) => 1+(0);
	4) 0
*/

int fattoriale(int n){
	if(n==0)
		return 1;
	else
		return n*fattoriale(n-1);
}
