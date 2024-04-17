#include <stdio.h>
#include <stdlib.h>
int main(){
    long long int sum = 0;

    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }

    printf("%lld",abs(sum));
    return 0;

    // need to submit this code on C++ language , then it will show accepted.
}