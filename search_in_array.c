#include <stdio.h>
#include <conio.h>

int main()
{

    int i, a[20],n,num;

    printf("Enter the size of array you want: - \n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        
        printf("Enter the array you want at place %d: -",i);
        scanf("%d", &a[i]);

    }

    printf("\n---------------------------------------------\n");

    printf("\nWhat do you want to search b/w number 1 - %d\t", n);
    scanf("%d", &num);

    for (i = 0; i < n; i++)
    {
        if (num == a[i])
        {
            printf("Found It!\n");
            printf("It is present at place %d in the present array\n", i);
        }
    }

    // getch();

    return 0;
}