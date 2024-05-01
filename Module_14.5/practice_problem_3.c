#include<stdio.h>
// Rule 1
char char_to_ascii_return_and_parameter(char ch){
int chr = ch;
return chr;
// Accepted
}

// Rule 2
char char_to_ascii_return_No_parameter(){
    char chr;
    scanf("%c",&chr);
    return chr;
    // Accepted
}

// Rule 3
void char_to_ascii_No_return_with_parameter(char ch){
printf("Rule 3 = %d \n",ch);
// Accepted
}

// Rule 4
void char_to_ascii_no_return_no_parameter(){
    char ch;
    scanf("%c",&ch);
    // int chr = ch;
    printf("Rule 4 = %d \n",ch);
    // Accepted
}

int main(){
   /* 
    // Rule_number_1 : parameter with return
    char ch;
    scanf("%c",&ch);
    int value_1 = char_to_ascii_return_and_parameter(ch);
    printf("Rule 1 = %d \n",value_1);
*/
// --------------------------------------------------
/*
// Rule_number_2 : No Parameter with return
int value_2 = char_to_ascii_return_No_parameter();
printf("Rule 2 = %d \n",value_2);
*/
// ---------------------------------------------------
/*
// Rule number 3 = No Return with Parameter 
char chr;
scanf("%c",&chr);
char_to_ascii_No_return_with_parameter(chr);

*/
// -------------------------------------------------------
// Rule 4
char_to_ascii_no_return_no_parameter();

    return 0;
}