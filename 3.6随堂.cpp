#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n == 0)printf("HEHE\n");
    else if (n < 60) printf("FAIL\n");   //00 < n < 60����д�ǲ��Ե�
    else if (n < 75) printf("MEDIUM\n"); //60 <= n < 75����д�ǲ��Ե�
    // 00 < n < 60   ��ִ��00 < n,�������ʽ���ֵΪ1����ִ��< 60
    else printf("GOOD\n");
    return 0;
}
