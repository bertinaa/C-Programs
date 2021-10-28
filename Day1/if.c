#include<stdio.h>
int main()
{
    /* if (expression that gives TRUE) */

    if(1)
    {
        printf("1 Works\n");
    }
if(-1)
    {
        printf("-1 Works\n");
    }

if(1.0)
    {
        printf("1.0 Works\n");
    }
if('M')
    {
        printf("'M' Works\n");
    }
if(0)
    {
        printf("0 does NOT Work\n");
    }
    else
    {
        printf("ZERO becomes FALSE\n");
    }
if('+')
    {
        printf("'+' Works\n");
    }
if(' ')
    {
        printf("' ' Works\n");
    }
if(!0)
    {
        printf("!0 does NOT Work\n");
    }
    return 0;
}
