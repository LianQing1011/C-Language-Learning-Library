#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n == 0)printf("HEHE\n");
    else if (n < 60) printf("FAIL\n");   //00 < n < 60这样写是不对的
    else if (n < 75) printf("MEDIUM\n"); //60 <= n < 75这样写是不对的
    // 00 < n < 60   先执行00 < n,条件表达式结果值为1，后执行< 60
    else printf("GOOD\n");
    return 0;
}
