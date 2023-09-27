#include<stdio.h>

int main() {
    int a, b;
    scanf("%d%d",&a, &b);
    a < b && printf("YES");  
    !(a < b) && printf("NO"); 
    return 0;
}
