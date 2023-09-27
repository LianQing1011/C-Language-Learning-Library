#include <stdio.h>
void print_digit(int x){
    for(int i=31;i>=0;i--){
        printf("%c",(x & (1 << i)) ? '1':'0');
    }
    printf("\n");
    for(int i=31;i>=0;i--){
            printf("%d",(x & (1 << i)) ? 1 : 0);
        }
    printf("\n");
}
int main() {
    int a = 5, b = 3;
    printf("a = ");
    print_digit(a);
    printf("b = ");
    print_digit(b);
    printf("a & b = "); print_digit(a & b);
    printf("a | b = "); print_digit(a | b);
    printf("a | b = "); print_digit(a ^ b);//��ͬ��0����ͬ��1
  return 0;
}
