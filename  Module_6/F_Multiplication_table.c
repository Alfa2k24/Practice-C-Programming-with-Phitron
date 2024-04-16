#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    for(int i = 1; i <= 12; i++){
        int value = i * number;
        printf("%d * %d = %d\n",number,i,value);
    }
    return 0;
}