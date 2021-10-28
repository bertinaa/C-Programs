#include<stdio.h>
#include<math.h>

int main()
{

    printf("ceil of 1.1 is %d\n", (int)ceil(1.1));
    /*                          typecasting
                                because ceil gives double */
    printf("floor of 1.99 is %d\n", (int)floor(1.99));
    /*                          typecasting
                                because floor gives double */
//typecasting is (int),(float),etc.
    return 0;
}
