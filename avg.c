#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float a,b,c,avg;
    printf("ENTER ANY THREE NUMBERS : ");
    scanf("%f%f%f",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("the average is :%f",avg);
    return EXIT_SUCCESS;
}
