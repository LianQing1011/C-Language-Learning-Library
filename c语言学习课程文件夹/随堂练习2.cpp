/*��дһ�����򣬶���һ�����ַ��������ܰ����ո񣩣��������ַ������ַ���������*/
#include<stdio.h>
int main(){
    char s[100] = "hello world";//�������99���ַ�������β��/0�ַ�
    /*/printf("%s\n",s);
    scanf("%s",s);
    printf("scanf s : %s\n",s);//scanf�����ո��ֹͣ����
    getchar();
    scanf("%[a-zA-Z]",s);
    printf("%%[a-zA-Z] : %s\n",s);//[]����ַ����Ա�ɨ��*/
    scanf("%[^\n]",s);
    int n;
    n = printf("%s",s);
    printf(": %d\n",n);
    return 0;
}
