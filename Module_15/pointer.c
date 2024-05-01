#include <stdio.h>

int main(){

int a = 10;
int b = 20;

int *p = &a;
int *q = &b;

printf("A value = %d\n",a);
printf("A value = %d\n",*p);

printf("B value = %d\n",b);
printf("B value = %d\n",*q);

printf("A Address = %p\n",&a);
printf("A Address = %p\n",p);

printf("A Address = %p\n",&b);
printf("A Address = %p\n",q);

*p = 30;
*q = 40;

printf("A value => %d\n",a);
printf("A value => %d\n",*p);

printf("B value => %d\n",b);
printf("B value => %d\n",*q);

printf("A Address => %p\n",&a);
printf("A Address => %p\n",p);

printf("A Address => %p\n",&b);
printf("A Address => %p\n",q);

}


// vary vary important concept of pointer 


/*

A value = 10
A value = 10
B value = 20
B value = 20
A Address = 0x7fff5baa5020
A Address = 0x7fff5baa5020
A Address = 0x7fff5baa5024
A Address = 0x7fff5baa5024
A value => 30
A value => 30
B value => 40
B value => 40
A Address => 0x7fff5baa5020
A Address => 0x7fff5baa5020
A Address => 0x7fff5baa5024
A Address => 0x7fff5baa5024



*/