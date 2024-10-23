#include <stdio.h>
#include <string.h>
int main() {
    char a[23];
    char b[11];
    char c[11];
    scanf("%s %s", &a, &b);

    int len_a = strlen(a);
    int len_b = strlen(b);
    
    strcpy(c, a);
    strcat(a, b);
    char temp = c[0];
    c[0] = b[0];
    b[0] = temp;

    printf("%d %d\n", len_a, len_b);
    printf("%s\n", a);
    printf("%s %s", c, b);

    return 0;
}