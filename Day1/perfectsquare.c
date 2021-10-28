/*
Write a 'C' program to check if a number is a perfect square
Note : use sqrt() and ceil()

Input a number
take the sqrt(number)
multiply sqrt * sqrt
if it is equal to the number then it is a PERFECT SQUARE

*/
#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    scanf("%d", &num);
    if( ( ceil ( sqrt(num) )  * ceil ( sqrt(num) ) ) == num)
       printf("%d is a PERFECT Square", num);




    return 0;
}
