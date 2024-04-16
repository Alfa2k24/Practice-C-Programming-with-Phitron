#include<stdio.h>
int main(){
    int inputNumber;
    scanf("%d",&inputNumber);
    for(int i = 1; i <= inputNumber; i++){
        int value;
        scanf("%d",&value);
        do {
            printf("%d ", value % 10);
            value = value / 10;
        }
        while(value != 0);
        printf("\n");
    }
    return 0;
}