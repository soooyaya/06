#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int factorial(int n)
{
	int res=1;
	int i;
	
	for(i=1;i<=n;i++)
		res=res*i;
		
		return(res);
}

int com(int n, int r){
	int a, b, c;
	int result;
	
	a = factorial(n);
	b = factorial(n-r);
	c = factorial(r);
	
	result = a/(b*c);
	
	return result;
	}	

int main(int argc, char *argv[]) {
	int n, r;
	
	printf("Input any number for n:");
	scanf("%d", &n);
	printf("Input any number for r:");
	scanf("%d", &r);
	
	printf("c(%d, %d) = %d\n", n, r, com(n,r));
	
	return 0;
}

