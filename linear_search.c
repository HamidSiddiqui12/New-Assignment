#include <stdio.h>

int main()
{

    int i,a[10],n;

    printf ("Enter the array\n");
    for (i = 0; i < 10; i++)
    {
        scanf ("%d", &a[i]);
    }

    printf("Enter any number\n");
    scanf("%d", &n);

    for (i = 0; i < 10; i++)
    {
        if (n==a[i])
        {
            printf("Search found!");
        }
        
    }

    return 0;
}