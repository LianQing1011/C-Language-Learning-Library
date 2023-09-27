#include<stdio.h>
#include<inttypes.h>
int main(){
    int a = 123,b = 97,c,d;
    c = 100062;
    d = 9651;
    printf("%d %d %d %d\n",a, b , c, d);
    a = 2147483647 + 1;
    printf("%d\n",a);
    printf("int32_min = %d\n",INT32_MIN);
    printf("int32_max = %d\n",INT32_MAX);
    long long E;
    E = INT32_MAX + 1;
    printf("%lld\n",E);//输出结果为-2147483648，不对，因为编译器默认情况下默认按照整形规则计算
    E = INT32_MAX + 1LL;//解决办法，在任意操作数后加上LL
    printf("%lld\n",E);
    float f = E;
    double ff =E;
    printf("float : %f\n",f);//float : 2147483648.000000
    printf("double : %lf\n",ff);//double : 2147483648.000000
    float f1 = E + 0.1;
    double ff1 =E + 0.1;
    printf("float1 : %f\n",f1);//float1 : 2147483648.000000  float有效数字只有7位
    printf("double1 : %lf\n",ff1);//double1 : 2147483648.100000
    double ff2 =E + 0.123456789;
    printf("double2 : %lf\n",ff2);//double2 : 2147483648.123457 单双精度浮点型默认输出小数点后6位
    printf("double2 : %.9lf\n",ff2);//double2 : 2147483648.123457000 double有效数字只有15位*/
    char g = 'a';
    printf("g=%c\n",g);//g=a
    printf("g=%d\n",g);//g=97,字符型变量可以当作整形对待
    printf("g + 5 = %c\n",g+5);//g+5=f
    printf("48 = %c\n",48);//48 = 0
    printf("sizeof(int) = %d\n",sizeof(int));
    printf("sizeof(long long) = %d\n",sizeof(long long));
    printf("sizeof(float) = %d\n",sizeof(float));
    printf("sizeof(double) = %d\n",sizeof(double));
    printf("sizeof(char) = %d\n",sizeof(char));
    float toobig = 3.4e38 * 100.0f;
    printf("%e\n",toobig);//上溢 无穷大的特定值INF
    return 0;
}
