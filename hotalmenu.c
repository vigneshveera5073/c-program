#include<stdio.h>

int main(){
    int op;
    printf(":choose the opition: \n  porota=1 \n  briyani=2 \n  fried rice=3 \n  noodles=4 \nEnter the option : ");
    scanf("%d",&op);
    switch(op){
        case 1:
        printf("\nYou choose porota!\nporota will be serve just 2 minute! ");
        break;
        case 2:
        printf("\nYou choose briyani!\nbriyani will be serve just 2 minute! ");
        break;
        case 3:
        printf("\nYou choose fried rice!\nfried rice will be serve just 5 minute! ");
        break;
        case 4:
        printf("\nYou choose noodles!\nnoodles will be serve just 5 minute! ");
        break;
        default:
        printf("\n:ERROR:\n---You choose wrong option!---");
        break;
    }
    return 0;
}