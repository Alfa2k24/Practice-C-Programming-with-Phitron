/*

input = 1234
output = 5

*/

#include<stdio.h>

extractSum(number);

int main(){

    int number;
    scanf("%d",&number);
    int result = extractSum(number);
    printf("%d \n",result);
    return 0;
}



int extractSum(int num){
    int first_number = num / 1000;
    int last_number = num % 10;
    int sum = first_number + last_number;
    return sum;
}