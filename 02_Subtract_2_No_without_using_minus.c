// Subtraction of 2 No without using - operator
#include <stdio.h>
#include <conio.h>
void main()
{
    int firstNo, secondNo, sub;

    printf("Enter First No : ");
    scanf("%d", &firstNo);
    
    printf("Enter Second No : ");
    scanf("%d", &secondNo);

    // 2's Complement of secondNo
    sub = firstNo + (~secondNo + 1);

    printf("The Subtraction of two No. is : %d", sub);

    getch();
}