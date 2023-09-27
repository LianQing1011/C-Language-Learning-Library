//随堂练习三
#include<stdio.h>

int main(){
    char s[100],t[100];
    scanf("%[^\n]",s);//读入带空格的字符串 %[]占位符 ^非
    int n = 0;
    n = sprintf(t, "| %s |",s);//计算字符串与两边||的长度
    for (int i = 0;i<n;i++)printf("-");//打印上横线
    printf("\n");
    printf("| %s |\n",s);//打印中间内容与两边||
    for (int i = 0;i<n;i++)printf("-");//打印下横线
    return 0;
}
