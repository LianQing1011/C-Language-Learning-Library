#include <stdio.h>

int main(){
    double a, b;
    scanf("%lf%lf",&a, &b);
    printf("%.2lf\n%.2lf",(a + b) * 2, a * b);
    return 0;
}
