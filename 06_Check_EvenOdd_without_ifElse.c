// Check Even Odd no without using if else
#include <stdio.h>
#include <conio.h>
void main()
{
    int num;
    printf("Enter the No : ");
    scanf("%d", &num);

    // stat1?stat2:stat3;

    (num % 2 == 0) ? printf("%d is Even Number", num) : printf("%d is Odd Number", num);

    getch();
}