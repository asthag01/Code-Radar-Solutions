#include <stdio.h>

int main() {
    float a,b,c;
    float d;
    scanf("%.0f%.0f%.0f",&a,&b,&c);
    d=(a+b+c)/3;
    printf("Average: %.2f",d);
    return 0;
}