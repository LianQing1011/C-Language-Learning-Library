#include<stdio.h>
int main (){
    int n1,n2;
    n1 = printf("hello world\n");
    int a = 123;
    n2 = printf("hello world : %d\n",a);
    printf("n1 = %d,n2 = %d",n1,n2);//n1 = 12,n2 = 18 输出字符数，包括换行符。
    return 0;
}
