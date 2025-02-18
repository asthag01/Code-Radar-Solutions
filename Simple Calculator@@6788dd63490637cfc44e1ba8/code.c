#include<stdio.h>
int main(){
    char a;
    float b,c,d,e,f,g;
    scanf("%d%d", &b,&c);
    scanf("%c",&a);
    switch(a) {
        case '+':
        d=b+c;
        printf("%.2f",d);
        break;
         case '-':
        e=b-c;
        printf("%.2f",e);
        break;
         case '*':
        f =b+c;
        printf("%.2f",f);
        break;
         case '/':
        g=b+c;
        printf("%.2f",g);
        break;
        default:
        printf("Invalid");
        break;
    }
    return 0;
}