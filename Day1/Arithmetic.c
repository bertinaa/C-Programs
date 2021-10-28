#include<stdio.h>
int main()
{
    int n1;
    int n2;
    int sum;
    int diff;
    int prod;
    int quo;
    int remainder;
    n1 = 50;
    n2 = 20;
    sum = n1 + n2;
    diff = n1 - n2;
    prod = n1 * n2;
    quo = n1 / n2;
    remainder = n1 % n2;
    /* 50 + 20 = 70  %d is called format specifier
    printf("how to print", what are to printed);
    printf("%d + %d = %d"n1, n2, sum);
    */

    printf("%d + %d = %d\n", n1, n2, sum);
    printf("%d - %d = %d\n", n1 , n2, diff);
    printf("%d * %d = %d\n", n1, n2, prod);
    printf("%d / %d = %d\n", n1, n2, quo);
    printf("%d %% %d = %d\n", n1, n2, remainder);

    printf("\\"); 
    //this will print \


    return 0;
}
