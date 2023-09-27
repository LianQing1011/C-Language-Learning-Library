#include<stdio.h>
int main(){
    int a,b,n;
    n=scanf("%d%d", &a, &b);
    printf("a = %d,b = %d\n",a,b);
    printf("n = %d\n",n);
    n = scanf("%dabc%d", &a, &b);//输入123abc456  abc在这里不是参数，是被sacnf格式化的部分  
    printf("a = %d,b = %d\n",a,b);
    printf("n = %d\n",n);//读入成功会显示n的值，不成功（没有输入）输出-1（EOF文件末尾输出符）ctrl+z文件结束符
    return 0;
    }
