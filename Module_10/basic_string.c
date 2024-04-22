#include<stdio.h>
int main(){
//  Declaration and initiation 

    // char ch[5];
    // ch[0] = 'h';
    // ch[1] = 'e';
    // ch[2] = 'l';
    // ch[3] = 'l';
    // ch[4] = 'o';

    // printf("%s", ch);
//---------------------------------------
// Issue
    // char ch[6] = "hello";
    // ch[5] = '\0';
    // printf("%s",ch);

//-------------------------------------
// Issue

// char ch[] ={'H','E','L','L','O','\0'};
// printf("%s",ch);


//--------------------------------

// char ch[]= "ALFA SUNNY";
// printf("%s",ch);


/*--------------------------------*/

char ch[5];

// scanf("%s",ch);
//  gets(ch);
fgets(ch, sizeof(ch)/sizeof(char),stdin);

printf("%s",ch);


    return 0;
}