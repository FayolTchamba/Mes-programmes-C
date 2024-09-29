#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
     const int MAX = 48, MIN = 1;
     int nbreEntre = 0, nombreMystere = 0, k = 0;
     //on génère le nombre aléatoire compris entre 1 et 100
     srand(time(NULL));
     nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;


     /* La boucle du programme. Elle se répète tant que
     l'utilisateur n'a pas trouvé le nombre mystère */


     do
     {    
            // On demande le nombre au joueur

          printf ("\nQuel est le nombre ? \t");

          scanf  ("%d", &nbreEntre);
          k++;


          // On compare le nombre qu'il a entré au nombre mystere


          if(nbreEntre >= MIN &&  nbreEntre <= MAX && nbreEntre < nombreMystere)
          {
               printf("\nC'est plus !\n");
          }
          else if (nbreEntre >= MIN &&  nbreEntre <= MAX && nbreEntre > nombreMystere)
          {
               printf("\nC'est moins !\n");
          }
          else if (nbreEntre < MIN ||  nbreEntre > MAX)
          {
               printf("\nVeuillez entrer un nombre compris entre 1 et 48 !\n");
          }

          else
          {
               printf("\nBravo, vous avez trouve le nombre mystere en %d coups !!!\n\n", k);
          }



          if(k > 8)
          {
               printf("\nGame over !\n");
               break;
          }


     }
         while(k <= 8 && nbreEntre != nombreMystere);

         return 0;
}
