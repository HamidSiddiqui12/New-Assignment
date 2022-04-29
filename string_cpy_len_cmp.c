#include <stdio.h>
#include <string.h>

int main()
{

    char name[20] = "The arrays is";
    char name2[20] = "-not required";

    printf("String without operation\n");
    printf("The 1st string : %s\n", name);
    printf("The 2nd string : %s\n", name2);

    strcpy(name2, name);
    printf("%s", name2);

    printf("\nString after operation\n");
    printf("The 1st string : %s\n", name);
    printf("The 2nd string : %s\n", name2);

    printf("\n");

    printf("The string lenght of:\n %s  - : %d\n", name2, strlen(name2));

    if (strcmp(name, name2) == 0)
    {
        printf("Both the string is same");
    }
    else{
        printf("\nBoth the string is diffrent");
    }
    

    return 0;

}