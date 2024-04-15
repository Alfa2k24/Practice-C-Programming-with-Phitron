#include <stdio.h>
int main(){

    int even = 0, odd = 0, positive = 0, negative = 0;

    int value, number;
    scanf("%d",&number);

    for(int i = 1; i <= number; i++){
        scanf("%d",&value);
        if(value %  2 == 0){
            even++;
            //   printf("%d \n",value);
        } else{
            odd++;
            //   printf("%d \n",value);
        }
        if(value > 0){
            positive++;
            //   printf("%d \n",value);
        } else if (value < 0){
            negative++;
            // printf("%d ",value);
        }
    }

   printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd,positive,negative);
    return 0;
    
}