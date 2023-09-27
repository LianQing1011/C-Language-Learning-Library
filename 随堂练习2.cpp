/*请写一个程序，读入一个行字符串（可能包含空格），输出这个字符串中字符的数量。*/
#include<stdio.h>
int main(){
    char s[100] = "hello world";//最多输入99个字符，最后结尾是/0字符
    /*/printf("%s\n",s);
    scanf("%s",s);
    printf("scanf s : %s\n",s);//scanf遇到空格就停止读入
    getchar();
    scanf("%[a-zA-Z]",s);
    printf("%%[a-zA-Z] : %s\n",s);//[]里的字符可以被扫描*/
    scanf("%[^\n]",s);
    int n;
    n = printf("%s",s);
    printf(": %d\n",n);
    return 0;
}
