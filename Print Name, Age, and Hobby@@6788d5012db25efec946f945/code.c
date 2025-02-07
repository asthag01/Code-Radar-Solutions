#include <stdio.h>

int main() {
    int a;
    char name[100],hobby[100];
    scanf("%s%d%s",name,&a,hobby);
    
    printf("Name: %s\n",name);
    printf("Age: %d\n",&a);
    printf("Hobby: %s",hobby);
    return 0;
}