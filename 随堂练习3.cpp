//������ϰ��
#include<stdio.h>

int main(){
    char s[100],t[100];
    scanf("%[^\n]",s);//������ո���ַ��� %[]ռλ�� ^��
    int n = 0;
    n = sprintf(t, "| %s |",s);//�����ַ���������||�ĳ���
    for (int i = 0;i<n;i++)printf("-");//��ӡ�Ϻ���
    printf("\n");
    printf("| %s |\n",s);//��ӡ�м�����������||
    for (int i = 0;i<n;i++)printf("-");//��ӡ�º���
    return 0;
}
