// Find largest no without using if else
#include <stdio.h>
#include <conio.h>
void main()
{
    int firstNo, secondNo, thirdNo, max;

    printf("Enter First No : ");
    scanf("%d", &firstNo);

    printf("Enter Second No : ");
    scanf("%d", &secondNo);

    printf("Enter Third No : ");
    scanf("%d", &thirdNo);

    max = firstNo > secondNo ? (firstNo > thirdNo ? firstNo : thirdNo) : (secondNo > thirdNo ? secondNo : thirdNo);

    printf("%d is largest number", max);

    getch();
}