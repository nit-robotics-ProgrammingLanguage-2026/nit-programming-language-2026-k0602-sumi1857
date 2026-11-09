#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    if(n<0){
       printf("NG");
    }else{
        long long sum=0;

        for (int i=1; i<=n; i +=2){
            sum += i;
        }

        printf("%lld");
    }
    /* TODO */
    return 0;
}
