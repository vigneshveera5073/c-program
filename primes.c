#include<stdio.h>
int main(){
    int limit=10,count,div,num,sum=0;
    for (num=1;num<=limit;num++){
        count=0;
        for(div=2;div<=num/2;div++){
            if(num%div==0){
                count++;
                break;
            }
        }


        if(count==0 && num!=1){
            sum=sum+num;
           
    }
        
    }
    printf("%d",sum);
    return 0;
   
}