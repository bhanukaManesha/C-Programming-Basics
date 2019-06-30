#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int count = 5;
    time_t t;

    // Initializing my random number
    srand((unsigned) time(&t));
    int myGuess =  rand() % 21;;

    int guess;
    printf("\n%i\n",myGuess);

    printf("This is a guessing game.\nI have chosen a number between 0 and 20 which you must guess\n\n");


    while (count > 0){
        printf("You have %i tries left\nEnter a guess : ",count);
        scanf("%i",&guess);
        
        if (guess <= 20){
            if (guess != myGuess) {
                if (guess > myGuess){
                    printf("Sorry, %d is wrong. My number is less than that\n\n",guess);
                }else{
                    printf("Sorry, %d is wrong. My number is greater than that\n\n",guess);
                }
            }else
            {
                printf("\nCongratulations. You guessed it.\n");
            }
        }else{
            printf("Please enter a value between 0 and 20\n\n");
        }
  
        count--;
   
        
    }

    return 0;
}