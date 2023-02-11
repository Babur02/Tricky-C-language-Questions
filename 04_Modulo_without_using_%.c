// Find Modulo without using % operator
#include <stdio.h>
#include <conio.h>
void main()
{
    int firstNo, secondNo, quotient, modulo;

    printf("Enter First No : ");
    scanf("%d", &firstNo);

    printf("Enter Second No : ");
    scanf("%d", &secondNo);

    // 11/3=3
    quotient = firstNo / secondNo;

    // 11-3*3=2 as * priority is higher than -
    modulo = firstNo - secondNo * quotient;

    printf("Modulo of two no is %d", modulo);

    getch();
}