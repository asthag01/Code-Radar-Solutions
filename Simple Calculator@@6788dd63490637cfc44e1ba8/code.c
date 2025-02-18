#include<stdio.h>
int main(){
    char a;
    float b,c,d;
    scanf("%d%d", &b,&c);
    scanf("%c",&a);
    switch(a) {
        case '+':
        d=b+c;
        printf("%.2f",d);
        break;
         case '-':
        d=b-c;
        printf("%.2f",d);
        break;
         case '*':
        d=b+c;
        printf("%.2f",d);
        break;
         case '/':
        d=b+c;
        printf("%.2f",d);
        break;
        default:
        printf("Invalid");
        break;
    }
    return 0;
}