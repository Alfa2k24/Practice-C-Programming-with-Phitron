#include<stdio.h>
int main(){
    char alphabet;
    scanf("%c", &alphabet);
    if( alphabet == 'z'){
        printf("a");
    }
    else if ( alphabet >= 'a' && alphabet <= 'z'){
        int value = alphabet + 1;
        printf("%c",value);
    }
    return 0;
    // solution accepted 
}