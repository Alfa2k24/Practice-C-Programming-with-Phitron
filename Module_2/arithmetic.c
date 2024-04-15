 #include<stdio.h>
 int main(){
    int number1, number2;
    scanf("%d %d",&number1, &number2);

    // Addition ( + )
    int addition = number1 + number2;
    printf("Addition = %d \n",addition);

    // Subtraction ( - )
    int subtraction = number1 - number2;
    printf("Subtraction = %d \n",subtraction);

    // Multiplication ( * )
    int multiplication = number1 * number2;
    printf("Multiplication = %d \n",multiplication);

    // Division ( / )
    int division = number1 / number2;
    printf("Division = %d \n",division);

    // Modulus ( % )
    int modulus = number1 % number2;
    printf("Modulus = %d \n",modulus);


    // type casting 

    int num1 = 25, num2 = 4;
    float number = num1*1.0 / num2;
    printf("Number = %0.2f",number);

    return 0;
 }