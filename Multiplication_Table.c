#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int Nbr , i , x ;
	
	printf("Saisir Le Nombre Pour Faire La Multiplication : \n");
	scanf("%d",&Nbr);
		for (i=1;i<=10; i++)
		{
			x=i*Nbr;
			printf("%d * %d = %d \n" ,i ,Nbr ,x);
		}
	return 0;
}
