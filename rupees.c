#include<stdio.h>

int main(){
    int amount,result,sub;
    printf("enter a your amount : ");
    scanf("%d",&amount);

    if(amount >= 500){
        result=amount/500;
        printf("500 RS notes : %d \n",result);
        sub=amount-500*result;

        if (amount>=200){
            result=sub/200;
            printf("200 RS notes : %d \n",result);
            sub=sub-200*result;

            if (amount>=100){
                result=sub/100;
                printf("100 RS notes : %d \n",result);
                sub=sub-100*result;

                if (amount>=50){
                    result=sub/50;
                    printf("50 RS notes : %d \n",result);
                    sub=sub-50*result;

                    if (amount>=20){
                        result=sub/20;
                        printf("20 RS notes : %d \n",result);
                        sub=sub-20*result;

                        if (amount>=10){
                            result=sub/10;
                            printf("10 RS notes : %d \n",result);
                            sub=sub-10*result;

                            if (amount>=5){
                                result=sub/5;
                                printf("5 Rs coin : %d \n",result);
                                sub=sub-5*result;

                                if (amount>=2){
                                    result=sub/2;
                                    printf("2 Rs coin : %d \n",result);
                                    sub=sub-2*result;

                                    if (amount>=1){
                                        result=sub/1;
                                        printf("1 Rs coin : %d \n",result);

                                        }
                                    
                                    }
                                }
                            }
                   
                    }
                }
            }
        }
    }
    return 0;
    
    }