#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter value of n: ");
    for(i=1; i<=5; i++)
    {
        /* Print i number of stars */
        for(j=1; j<=i; j++)
        {
            printf("%d",i);
        }

        /* Move to next line */
        printf("\n");
    }

    return 0;
}
