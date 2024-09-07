#include<stdio.h>
#include<stdlib.h> // for generating random numbers
#include<time.h>
int main(){
    int number ,guess, nguesses=1;
    srand(time(0)); // we initialize the random as srand and we use time 0 to produce different number every time
    number= rand()%50 +1;  //this will generate random number in between 0 to 100
    //printf("The number is %d\n ", number);

    do{
        printf("Guess the number between 1 to 50\n ");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower number please!\n");
        } else if(guess<number){
            printf("Higher number please!\n");
        }
        else{
            printf("You guessed it in %d attempt\n", nguesses);
        }
        nguesses++;
    } while(guess!=number);
    return 0;
}