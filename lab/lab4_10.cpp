#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
        int randomNum;
        int guess;
        int count=1;
        srand(time(NULL));
        randomNum = 1 + rand( ) % 10;
        printf("Random 1-10\n");
        do{
               printf("%d : ",count);                    
                 scanf("%d",&guess);
               count++;
                        if(guess > randomNum)
                                printf(" <<< \n");
                        else if(guess < randomNum)
                                printf(" >>> \n");
        }while(randomNum != guess);
        printf("\n\n--- the number %d ---\n",guess);
        printf("--- you guess is %d count ---\n",count-1);
}
