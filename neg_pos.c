#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a;
    printf("ENTER A NUMBER : ");
    scanf("%d",&a);
    if(a>0){
        printf("the number is positive.");
    }
else{
    printf("the number is negative.");
}
return EXIT_SUCCESS;
}