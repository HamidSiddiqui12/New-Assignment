#include <stdio.h>

int main()
{

    int i,n;
    char op;

    printf("Enter the size of the array\n");
    scanf("%d", &n);

    int a[n],b[n];

    printf("Enter the 1st array: \n");

    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the 2nd array: \n");

    for ( i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    
    printf("Enter the operation  +,-,*,/ :\n");
    scanf(" %c", &op);

    if (op == '+')
    {
        
        printf("The array sum is : ");
        for ( i = 0; i < n; i++)
        {
            printf(" %d", a[i]+b[i]);
        }
        
    }
    else if (op == '-')
    {

        printf("The array sub is : ");
        for ( i = 0; i < n; i++)
        {
            printf(" %d", a[i]-b[i]);
        }

    }
    else if (op == '*')
    {
        
        printf("The array sum is : ");
        for ( i = 0; i < n; i++)
        {
            printf(" %d", a[i]*b[i]);
        }

    }
    else if (op == '/')
    {
        
        printf("The array sum is : ");
        for ( i = 0; i < n; i++)
        {
            printf(" %d", a[i] / b[i]);
        }

    }
    else {
        printf("Operation not found!\n");
    }

    return 0;
}