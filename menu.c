#include<stdio.h>
#include<stdlib.h>
int main(void){
    int choice;
    printf("1 for porotta \n2 for mandhi \n3 for biriyani \n4 for rice\nENTER YOUR CHOICE : ");
    scanf("%d",&choice);
    switch(choice){
        case 1:printf("porotta");
        break;
        case 2:printf("mandhi");
        break;
        case 3:printf("biriyani");
        break;
        case 4:printf("rice");
        break;
        default:printf("you are a fool!!");
    }
return EXIT_SUCCESS;

}