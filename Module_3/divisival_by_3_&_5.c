#include<stdio.h>
int main()
{
    int n; 
    //scanf("%d",&n);
    for(int i=1; i<=30; i++){
        if(i%3==0 && i%5==0){
            printf("%d\n",i);
        }
    }
}