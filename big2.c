#include <stdio.h>

biggest2()
{
    int num, num2;

    printf("Enter two integers :");
    scanf("%d%d", &num1, &num2);

    if (num2 < num1)
    {
        printf("Largest number is %d.", num1);
    }
    else
    {
        printf("Largest number is %d.", num2);
    }

    //return 0;
}
