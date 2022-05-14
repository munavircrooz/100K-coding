#include <stdio.h>
#include<stdlib.h>
int main(void){
    int a,b,choise,result;
    printf("ENTER ANY TWO NUMBERS: ");
    scanf("%d%d",&a,&b);
    printf(" 1 FOR ADDITION \n 2 FOR SUBRACTION \n 3 FOR MULTIPLICATION \n 4 FOR DIVISION \n ENTER YOUR CHOISE : ");
    scanf("%d",&choise);
    if(choise==1){
        result=a+b;
        printf("result=%d",result);

    }
    else if(choise==2){
        result=a-b;
        printf("result=%d",result);
    }
    else if(choise==3){
        result=a*b;
        printf("result=%d",result);
    }
    else if(choise==4){
        result=a/b;
        printf("result=%d",result);
    }
    else{
        printf("you are a fool");
    }
    
    return EXIT_SUCCESS;


}