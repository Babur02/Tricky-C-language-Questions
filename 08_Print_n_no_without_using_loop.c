// Print n no without using loop
#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 1, num;
    printf("Enter any No : ");
    scanf("%d", &num);

    label:
    printf("%d ",i);
    i++;

    if(i<=num)
    goto label;

    getch();
}