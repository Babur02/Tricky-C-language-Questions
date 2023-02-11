// Addition of 2 No without using + operator
#include <stdio.h>
#include <conio.h>
void main()
{
    int firstNo, secondNo, sum;

    printf("Enter First No : ");
    scanf("%d", &firstNo);

    printf("Enter Second No : ");
    scanf("%d", &secondNo);

    sum = firstNo - (-secondNo);
    
    printf("The Sum of two No. is : %d", sum);

    getch();
}