#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//Guess The Number Game :
int main(){
    int number;
    srand(time(0));
    number = rand()%100 +1 ; //Generate random number between 1 to 100
    printf("Welcome to Guess The Number Game :\n***********************************\n\nYou have total 10 attempts.\n");
    int guess, count =1, attempt =10;
    do
    {
        if (attempt==0)
        {
            printf("You lost your all attempts.\n***************Better Luck Next Time*****************");break;
        }
        printf("\nEnter the number between 1 to 100: ");
        scanf("%d",&guess);
        
        if (guess>number)
        {
            --attempt;
            printf("Lower number please\nleft attempt %d\n",attempt);
        }
        else if (guess<number){
            --attempt;
            printf("Higher Number please\nleft attempt %d\n",attempt);
        }
        else{
            printf("*******************************\nYou guessed in %d attempts\n",count);
        }
        count++;
    } while (guess!=number);
    

}