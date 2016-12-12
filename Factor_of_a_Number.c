#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int Fact ,i ,Nbr ;
	
	printf("Entrer Le Nombre Pour Faire La Factorielle : \n");
	scanf("%d",&Nbr);
		Fact=1;
		for(i=1;i<=Nbr;i++)
		{
			Fact=Fact*i;
			
			
		}
		printf("Voila la Factorielle - \n %d",Fact);
		
	return 0;
}
