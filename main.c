#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
	
	if(argc==1){
                srand(time(NULL));
               int number_to_guess = rand() % 100 + 1;
               int guess = 0;
               printf("I have in mind a number in between 1 and 100, can you find it?\n");
               while (guess != number_to_guess){
                      scanf("%d", &guess);
                      if(guess >= 1 && guess <= 100){
                             if (guess > number_to_guess){
                                    printf("The number to guess is lower\n");
                             }
                             else if (number_to_guess > guess){
                                    printf("The number to guess is higher\n");
                             }
                      }
                      else{
                             printf("Invalid input\n");
                             return 1;
                      }
               }
              printf("You just found the number, it was indeed %d\n", guess);
               return 0;
        }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
       else if ( atoi(argv[1]) != 0 ){//si les arguments repondent au conditions
              srand(time(NULL));
               int number_to_guess = rand() % atoi(argv[1]) + 1;
              int guess = 0;
              printf("I have in mind a number in between 1 and %d, can you find it?\n",atoi(argv[1]));
	
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
              
	      while (guess != number_to_guess){
                      scanf("%d", &guess);
                      if(guess >= 1 && guess <= atoi(argv[1])){
                             if (guess > number_to_guess){
                                    printf("The number to guess is lower\n");
                             }
                             else if (number_to_guess > guess){
                                    printf("The number to guess is higher\n");
                             }
                      }
                      else{
                             printf("Invalid input\n");
                             return 1;
                      }
               }
              printf("You just found the number, it was indeed %d\n", guess);        
              return 0;
       }
        else{
	//si les arguments ne repondent pas aux conditions
             printf("Invalid input\n");
            return 1;
       }
}
