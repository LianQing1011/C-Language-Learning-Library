#include<stdio.h>
int main(){
    int a,b,n;
    n=scanf("%d%d", &a, &b);
    printf("a = %d,b = %d\n",a,b);
    printf("n = %d\n",n);
    n = scanf("%dabc%d", &a, &b);//����123abc456  abc�����ﲻ�ǲ������Ǳ�sacnf��ʽ���Ĳ���  
    printf("a = %d,b = %d\n",a,b);
    printf("n = %d\n",n);//����ɹ�����ʾn��ֵ�����ɹ���û�����룩���-1��EOF�ļ�ĩβ�������ctrl+z�ļ�������
    return 0;
    }
