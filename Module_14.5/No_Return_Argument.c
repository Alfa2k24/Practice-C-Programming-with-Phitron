/*

input = 1234
output = 5

*/

#include<stdio.h>

void extractSum(int num){
    int first_number = num / 1000;
    int last_number = num % 10;
    int result = first_number + last_number;
    printf("%d",result);
}


int main(){

    int number;
    scanf("%d",&number);
    extractSum(number);

    return 0;
}

