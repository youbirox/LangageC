#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float Nbr , Somme ;
	int i , x;

	Somme=0;
for (i=1;i<=3;i++)
{
	printf("Saisir le " "%d",i," Nombres Pour Afficher La Somme:\n") ;
	scanf("%f",&Nbr);
		Somme=Somme+Nbr;
	
	
}


	printf("Voila La Somme :"%.f",Somme");
	printf("/n tape au clavier pour sortir");
	scanf("%d",&x);
	

	return 0;
}
