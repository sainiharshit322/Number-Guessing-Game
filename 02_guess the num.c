#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num;
    int guess;
    int nguesses = 1;
    srand(time(0));
    num = rand() % 100 + 1; // Generates a random number between 1 and 100
    // printf("The number is %d\n", num);
    // Keep running the loop until the number is guessed.
    do
        {
            printf("Guess the number between 1 and 100\n");
            scanf("%d", &guess);
            if (guess > num)
            {
                printf("Lower number please!!\n");
            }
            else if (guess < num)
            {
                printf("Higher number please!!\n");
            }
            else
            {
                printf("You guessed it in %d attempts\n", nguesses);
            }
            nguesses++;
        }while (guess != num);
    return 0;
}