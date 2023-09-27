#include <stdio.h>
#include <inttypes.h>

int main() {
    int16_t a, b, c;
    //a = 15,b = 16;
    scanf("%"SCNd16 "%" SCNd16 ,&a, &b);
    c = a + b;
    printf("%" PRId16 "\n""%" PRId16 "\n", a + b, c);
    return 0;
}
