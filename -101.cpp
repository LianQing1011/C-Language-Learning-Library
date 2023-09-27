#include <stdio.h>

int main(){
    char s[10];
    scanf("%s",s);
    int a = 0, b = 0, c = 0 , d = 0;
    sscanf(s,"%1d%1d%1d%1d",&a, &b, &c, &d);
    printf("%d",a + b + c +d);
    return 0;
    
}
