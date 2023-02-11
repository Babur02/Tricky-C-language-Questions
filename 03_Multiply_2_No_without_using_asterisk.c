// Multiplication of 2 No without using * operator
#include <stdio.h>
#include <conio.h>
void main()
{
    int firstNo, secondNo, mul = 0, i;

    printf("Enter First No : ");
    scanf("%d", &firstNo);
    
    printf("Enter Second No : ");
    scanf("%d", &secondNo);

    if (secondNo < 0)
    {
        secondNo = -secondNo;
        firstNo = -firstNo;
    }
    for (i = 1; i <= secondNo; i++)
    {
        mul = mul + firstNo;
    }

    printf("The Multiplication of two No. is : %d", mul);

    getch();
}