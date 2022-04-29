#include <stdio.h>

int main()
{

    int i,n;

    printf("Enter the array size between: ");
    scanf("%d", &n);

    int a[n];

    for ( i = 0; i < n; i++)
    {
        printf("Enter the array number: \n");
        scanf("%d", &a[i]);
    }

    printf("The array size is : ");

    for ( i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}