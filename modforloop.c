#include<stdio.h>
#include<stdlib.h>
int main(void){
    int n,i;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(i%!!0){
            printf("%d\n",i);
        }
    }
    return EXIT_SUCCESS;
}