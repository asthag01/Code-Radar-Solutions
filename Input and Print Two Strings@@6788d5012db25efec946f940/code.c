#include <stdio.h>

int main() {
    char str1[100],str2[100];
    scanf("%99[^\n]",str1);
    scanf("%99[^\n]",str2);
    printf("You entered: %s and %s",str1,str2);
    return 0;
}