#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    switch(a){                             //case��Ϊ��ڣ�������ִ����ڼ�������䣬ֱ������break��switch�ṹĩβ
        case 1: printf("case a = one\n"); break ;
        case 2: printf("case a = two\n"); break ;
        case 3: printf("case a = three\n"); break ;
        case 4: printf("case a = four\n"); break ;
        default: printf("error\n");
    }
    return 0;
}
