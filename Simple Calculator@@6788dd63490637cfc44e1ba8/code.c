#include<stdio.h>
int main(){
    char a;
    float b,c,d,e,f,g;
    scanf("%d%d", &b,&c);
    scanf("%c",&a);
    switch(a) {
        case '+':
        d=b+c;
        printf("%d",d);
        break;
         case '-':
        e=b-c;
        printf("%d",e);
        break;
         case '*':
        f =b+c;
        printf("%d",f);
        break;
         case '/':
        g=b+c;
        printf("%d",g);
        break;
        default:
        printf("Invalid");
        break;
    }
    
}