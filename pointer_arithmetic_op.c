#include <stdio.h>
#include <conio.h>

int main()
{

    int *ptr1, *ptr2, a,b,c;
    char n;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("\nEnter the first number: ");
    scanf("%d", &b);

    ptr1 = &a;
    ptr2 = &b;

    printf("Enter the any of these +,-,*./\n");
    scanf(" %c", &n);

    if (n =='+')
    {
        c = *ptr1+*ptr2;
        printf("The sum is %d", c);

    }
    else if (n =='-')
    {
        c = *ptr1-*ptr2;
        printf("The sum is %d", c);

    }
    else if (n =='*')
    {
        c = *ptr1**ptr2;
        printf("The sum is %d", c);

    }
    else if (n =='/')
    {
        c = *ptr1 / *ptr2;
        printf("The sum is %d", c);

    }
    

    return 0;

}