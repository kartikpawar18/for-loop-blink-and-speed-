#include<stdio.h>

void main()
{
    int i, speed;

    clrscr();

    printf("Enter starting speed: ");
    scanf("%d", &speed);

    for(i = 1; i <= 5; i++)
    {
        printf("Step %d: Motor speed = %d RPM\n", i, speed);
        speed = speed + 10;
    }

    getch();
}