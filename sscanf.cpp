#include<stdio.h>

int main(){
    char s[100] = "123  456  789";
    int a, b, c;
    sscanf(s, "%d%d%d",&a, &b, &c);//���ַ����ж�ȡ����
    printf("a = %d, b = %d, c = %d",a, b, c);
}
