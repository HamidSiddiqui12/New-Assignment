#include<stdio.h>

int main()
{

    int i,a;

    printf("Enter the size of the array between 1-10\n");
    scanf("%d", &a);

    int arr[a];

    for (i = 0; i < a; i++)
    {
        printf("Enter the for the %d place\n", i);
        scanf("%d", &arr[i]);
    }

    printf("\nThe number in array is : ");
    for (i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
}