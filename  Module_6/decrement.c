#include <stdio.h>
int main(){
    int n,m,x,y;

    // pre decrement
    // n = 10  x = 9
    n = 10;
    x = --n;
    printf("n = %d x = %d \n",n,x);

    // post decrement
    // m = 10 y = 10
    m = 10;
    y = m--;
    printf("M = %d Y = %d",m,y);


    // DONE
}