#include <stdio.h>




int main()
{

    int x, y;

    printf("enter two numbers:");
    scanf("%d %d", &x,&y);

    //if the second input is 0 it is an error
    if (y==0)
    {
        printf("error: division by zero\n");
        return 1;
    }


    //the math problems:
    float z_1 = x*x + y*y - (x * y) + 2;
    float z_2 = (x - y)*(x - y)*(x - y) - 3;
    float z_3 = (2*x*x*x-x*x/2.0-x+4)/y;


    printf("z_1: %f\n", z_1);
    printf("z_2: %f\n", z_2);
    printf("z_3: %f\n", z_3);

    return 0;
}




















