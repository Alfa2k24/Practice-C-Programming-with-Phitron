#include <stdio.h>
// Rule 1
char small_to_capital_parameter_with_return(char ch){
    char small_to_capital_char = ch - 32;
    return small_to_capital_char;
}

// Rule 2
char small_to_capital_return_with_No_parameter(){
    char ch;
    scanf("%c", &ch);
    char small_to_capital_char  = ch - 32;
    return small_to_capital_char;
}

//Rule 3
void small_to_capital_No_return_with_parameter(char ch){
 char small_to_capital_char = ch - 32;
 printf("Rule 3 = %c", small_to_capital_char);
}

//Rule 4
void small_to_capital_no_return_no_parameter(){
    char ch;
    scanf("%c",&ch);
    char small_to_Capital_char_No_Return_NO_Parameter = ch - 32;
    printf("Rule 4 = %c",small_to_Capital_char_No_Return_NO_Parameter);
}

int main(){

// Rule 1 : Return With Parameter 
char ch;
scanf("%c", &ch);
printf("Rule 1 = %c \n", small_to_capital_parameter_with_return(ch));



/*
// Rule 2 : Return With No Parameter
char chr = small_to_capital_return_with_No_parameter();
printf("Rule 2 = %c\n", chr);
*/

/*
//Rule 3 : No Return With Parameter 
char ch;
scanf("%c", &ch);
small_to_capital_No_return_with_parameter(ch);
*/

// Rule 4 : No return No Parameter
// small_to_capital_no_return_no_parameter();

return 0;
}



// Solution Accepted 