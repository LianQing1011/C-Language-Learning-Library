#include<stdio.h>
 
int main(){
    char str[100] = "192.168.1.245";
    int a, b, c, d;
    sscanf(str,"%d.%d.%d.%d",&a, &b, &c, &d);//���ַ����ж�ȡabcd
    sprintf(str,"%d:%d:%d:%d",a, b, c, d);//��abcdд��str[]
    printf("str = %s\n",str);
    return 0;
}
