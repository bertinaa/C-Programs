/*
Write a 'C' program to check if a number is a perfect cube
Note : use cbrt() and ceil()
Input a number
take the cbrt(number)
multiply cbrt * cbrt * cbrt
if it is equal to the number then it is a PERFECT CUBE
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    scanf("%d", &num);
    if( ( cbrt(num) * cbrt(num) * cbrt(num) ) == num)
        printf("Given number %d is a perfect CUBE", num);


    return 0;
}
