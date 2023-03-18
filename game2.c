#include <stdio.h>
int main()
{
    int num, guess, nguesses=1;
    printf("****Multiplayer Game****\n");
    printf("Enter The number\n");
    scanf("%d", &num);

     // Keep running the loop until the number is guessed
    do
    {
        printf("Guess the number between 1-100\n");
        scanf("%d", &guess);
        if (guess > num)
        {
            printf("Lower Number Please!\n");
        }
        else if (guess < num)
        {
            printf("Higher Number Please!\n");
        }
        else
        {
            printf("You guessed it in %d attempts\n", nguesses);
        }
        
        nguesses++;
    } while (guess!=num);
    
    return 0;
}