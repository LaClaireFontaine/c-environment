int main (){
	for (int i=1; i<11; i+1){
		printf ("%d/n",i);
	}#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){
        srand (time(NULL));
        int number_to_guess=rand()%100+1;
        int guess=0;
        printf("I have in mind a number in between 1 and 100, can you find it?\n");
        while(guess!=number_to_guess){
                scanf("%d", &guess);
                if(guess>=1 && guess<=100){
                        if(guess>number_to_guess){
                                printf("The number to guess is lower\n");
                        }
                        else if(guess<number_to_guess){
                                printf("The number to guess is higher\n");
                        }
                }
                else {
                        printf("Invalude input");
                        return 1;
                }
        }
        printf("You just found the number, it was indeed %d\n, guess");
        return 0;
}
	return 0;
}
