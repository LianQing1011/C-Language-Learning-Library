#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int bai, shi, ge;
    bai = a / 100;
    shi = a % 100 / 10;
    ge = a % 10;
    printf("%d\n%d\n%d",bai, shi, ge);
    return 0;
}
