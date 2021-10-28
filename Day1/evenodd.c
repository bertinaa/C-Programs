/*
Even or ODD
*/
#include<stdio.h>
int main()
{
    int num;
    scanf("%d" , &num);
    if( (num % 2) == 0 )
        printf("Given Number %d is an Even Number", num);
    else
        printf("Given number %d is an ODD Number ", num);



    return 0;
}
