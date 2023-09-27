#include <stdio.h>
#include <math.h>

int main() {
    double x;
    scanf("%lf", &x);
    printf("%lf\n", x/180*acos(-1));
    return 0;
}
