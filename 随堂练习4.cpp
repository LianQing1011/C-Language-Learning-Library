#include <stdio.h>
#include <math.h>

int main() {
    double x;
    scanf("%lf", &x);
    printf("%lf ^ %lf = %lf", x, 1.0/3.0, pow(x, 1.0/3.0));
    return 0;
}
