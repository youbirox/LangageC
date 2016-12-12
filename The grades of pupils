#include <stdio.h>
#include <stdlib.h>

/*On veut realiser un algorithme permattant de calculer la moyenne
de X notes coefficientees dans une matiere pour un eleve */

int main(int argc, char *argv[])
{
unsigned char NomEleve[30] , PrenomEleve[30] , ClasseEleve[30] , Matiere[30] , Autre = 0 , NombreNotes = 0 ;
double NoteUn = 0.0 , NoteDeux = 0.0 , NoteTrois = 0.0 , NoteQuatre = 0.0 , NoteCinq = 0.0 ,  Moyenne = 0.0 ;
double CoeffNoteUn = 0.0 , CoeffNoteDeux = 0.0 , CoeffNoteTrois = 0.0 , CoeffNoteQuatre  = 0.0 , CoeffNoteCinq = 0.0 ;

printf("Bienvenue dans le programme de calcul de moyennes des eleves.\n\n");

        do
        {
        printf("Entrez le nom de l'eleve : ");
        scanf("%s", &NomEleve );
        printf("\n");
        printf("Entrez le prenom de l'eleve : ");
        scanf("%s", &PrenomEleve );
        printf("\n");
        printf("Entrez la classe de l'eleve : ");
        scanf("%s", &ClasseEleve );
        printf("\n");
        printf("Entrez la matiere de l'eleve : ");
        scanf("%s", &Matiere );
        printf("\n");
        printf("Combien de notes ? (limite a 5 notes) : ");
        scanf("%ld", &NombreNotes );
        printf("\n\n");

                switch (NombreNotes) // Je commence a 2 : La moyenne d'une seule note n'est pas difficile a calculer ;)
                {
                case 2 :
                        printf("Entrez la note 1 : ");
                        scanf("%lf", &NoteUn );
                        printf("\n");
                        printf("Entrez le coefficient de la note 1 : ");
                        scanf("%ld", &CoeffNoteUn );
                        printf("\n");
                        printf("Entrez la note 2 : ");
                        scanf("%lf", &NoteDeux );
                        printf("\n");
                        printf("Entrez le coefficient de la note 2 : ");
                        scanf("%ld", &CoeffNoteDeux );
                        printf("\n\n");
                Moyenne = (NoteUn * CoeffNoteUn + NoteDeux * CoeffNoteDeux) / (CoeffNoteUn + CoeffNoteDeux) ;
                        printf("L'eleve %s %s , de %s a une moyenne de %lf en %s. \n\n", NomEleve , PrenomEleve , ClasseEleve , Moyenne , Matiere );
                        printf("\n\n");
                break ;
        case 3 :
                        printf("Entrez la note 1 : ");
                        scanf("%lf", &NoteUn );
                        printf("\n");
                        printf("Entrez le coefficient de la note 1 : ");
                        scanf("%ld", &CoeffNoteUn );
                        printf("\n");
                        printf("Entrez la note 2 : ");
                        scanf("%lf", &NoteDeux );
                        printf("\n");
                        printf("Entrez le coefficient de la note 2 : ");
                        scanf("%ld", &CoeffNoteDeux );
                        printf("\n");
                        printf("Entrez la note 3 : ");
                        scanf("%lf", &NoteTrois);
                        printf("\n");
                        printf("Entrez le coefficient de la note 3 : ");
                        scanf("%ld", &CoeffNoteTrois );
                        printf("\n\n");
                Moyenne = (NoteUn* CoeffNoteUn + NoteDeux * CoeffNoteDeux + NoteTrois * CoeffNoteTrois)
        / (CoeffNoteUn + CoeffNoteDeux + CoeffNoteTrois);
                        printf("L'eleve %s %s , de %s a une moyenne de %lf en %s. \n\n", NomEleve , PrenomEleve , ClasseEleve , Moyenne , Matiere );
                        printf("\n\n");
                break ;
                case 4 :
                        printf("Entrez la note 1 : ");
                        scanf("%lf", &NoteUn );
                        printf("\n");
                        printf("Entrez le coefficient de la note 1 : ");
                        scanf("%ld", &CoeffNoteUn );
                        printf("Entrez la note 2 : ");
                        scanf("%lf", &NoteDeux );
                        printf("\n");
                        printf("Entrez le coefficient de la note 2 : ");
                        scanf("%ld", &CoeffNoteDeux );
                        printf("Entrez la note 3 : ");
                        scanf("%lf", &NoteTrois );
                        printf("\n");
                        printf("Entrez le coefficient de la note 3 : ");
                        scanf("%ld", &CoeffNoteQuatre );
                        printf("Entrez la note 4 : ");
                        scanf("%lf", &NoteQuatre );
                        printf("Entrez le coefficient de la note 4 : ");
                        scanf("%ld", &CoeffNoteQuatre );
        Moyenne = (NoteUn * CoeffNoteUn + NoteDeux * CoeffNoteDeux + NoteTrois * CoeffNoteTrois + NoteQuatre * CoeffNoteQuatre)
        / (CoeffNoteUn + CoeffNoteDeux + CoeffNoteTrois + CoeffNoteQuatre);
                        printf("\n\n");
                        printf("L'eleve %s %s , de %s a une moyenne de %lf en %s. \n\n", NomEleve , PrenomEleve , ClasseEleve , Moyenne , Matiere );
                        printf("\n\n");
                break ;
                case 5 :
                        printf("Entrez la note 1 : ");
                        scanf("%lf", &NoteUn );
                        printf("\n");
                        printf("Entrez le coefficient de la note 1 : ");
                        scanf("%ld", &CoeffNoteUn );
                        printf("\n");
                        printf("Entrez la note 2 : ");
                        scanf("%lf", &NoteDeux );
                        printf("\n");
                        printf("Entrez le coefficient de la note 2 : ");
                        scanf("%ld", &CoeffNoteDeux );
                        printf("\n");
                        printf("Entrez la note 3 : ");
                        scanf("%lf", &NoteTrois );
                        printf("\n");
                        printf("Entrez le coefficient de la note 3 : ");
                        scanf("%ld", &CoeffNoteTrois );
                        printf("\n");
                        printf("Entrez la note 4 : ");
                        scanf("%lf", &NoteQuatre );
                        printf("\n");
            printf("Entrez le coefficient de la note 4 : ");
            scanf("%ld", &CoeffNoteQuatre );
            printf("\n");
                        printf("Entrez la note 5 : ");
                        scanf("%lf", NoteCinq );
                        printf("\n");
                        printf("Entrez le coefficient de la note 5 : ");
                        scanf("%ld", CoeffNoteCinq );
        Moyenne = (NoteUn * CoeffNoteUn + NoteDeux * CoeffNoteDeux + NoteTrois * CoeffNoteTrois + NoteQuatre * CoeffNoteQuatre + NoteCinq * CoeffNoteCinq )
        / (CoeffNoteUn + CoeffNoteDeux + CoeffNoteTrois + CoeffNoteQuatre + CoeffNoteCinq);
            printf("\n\n");
            printf("L'eleve %s %s , de %s a une moyenne de %lf en %s. \n\n", NomEleve , PrenomEleve , ClasseEleve , Moyenne , Matiere );
            printf("\n\n");
        default :
            printf("Donnee incorecte !!!\n\n");
        break ;
        printf("Voulez vous calculer une autre moyenne ( 0 - Non , 1 - Oui ) : ");
        scanf("%ld", &Autre );
        }
    }while ( Autre != 0 );
return (0);
}
   
