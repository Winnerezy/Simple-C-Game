#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int maxRange = 100, minRange = 1, guessNumber, realNumber;
    char choice;
    do{
    printf("Guess the number:\n");
    scanf("%d", &guessNumber);

    realNumber = (minRange + rand());
    printf("%d", realNumber) % (maxRange - minRange + 1);
    printf("Number is %d\n", realNumber);
    if(guessNumber == realNumber){
        printf("Correct");
    } else if(guessNumber > realNumber){
        printf("Too high");
    } else if(guessNumber < realNumber){
        printf("Too low");
    } else{
        printf("Invalid guess");
    }
    printf("\nTry again ?\n (y/n)\n");
    
    scanf("%s", &choice);
    }
    while (choice == 'y' || choice == 'Y');
    printf("Cya");
    return 0;

}