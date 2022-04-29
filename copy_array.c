#include<stdio.h>

int main()
{

    int i,n;

    printf("Enter the array size : ");
    scanf("%d", &n);

    int arr[n],cpy[n];

    printf("\nEnter the array :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);      
    }

    for ( i = 0; i < n; i++)
    {
        cpy[i]=arr[i];
    }

    printf("\nThe entered array is :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", cpy[i]);      
    }

    return 0;
}