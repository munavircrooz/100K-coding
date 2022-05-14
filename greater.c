#include<stdio.h>
#include<stdlib.h>
int main(void){
    int a,b;
    printf("ENTER ANY 2 NUMBERS : ");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("%d is the greatest number",a);
    }
    else{
        printf("%d is the greatest number",b);
    }
    return EXIT_SUCCESS;
}
