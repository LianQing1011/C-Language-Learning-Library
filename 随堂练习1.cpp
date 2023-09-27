/*请使用printf函数，求解一个数字n的十进制表示的数字位数*/
#include<stdio.h>

int main(){
    int n, digit;
    scanf("%d", &n);
    digit = printf("%d",n);
    printf(" has %d digit(s)\n",digit);
    return 0;
}
