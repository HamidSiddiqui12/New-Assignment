#include <stdio.h>

int main()
{

    int n,i,j,temp;

    printf("Enter the array size you want :");
    scanf("%d", &n);

    printf("\n-------------------------------------\n");

    int  arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the array number for %d :", i);
        scanf("%d", &arr[i]);
    }

    printf("\n-------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("The array without bubble sorting %d :%d\n", i, arr[i]);
    }
    
    printf("\n----------------Sorting---------------------\n");

    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
            
        }
        
    }

    printf("\n//--//--//--//--//--//--//--//--//\n");
    printf("\n------Sorted array-------\n");

    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}