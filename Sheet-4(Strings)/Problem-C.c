#include <stdio.h>
#include <string.h>
int main() {
    char x[21], y[21];
    scanf("%s %s", x, y);

    int cmp = strcmp(x, y);
    if(cmp == 0) {
        printf("%s\n", x);
    }
    else if(cmp < 0) {
        printf("%s\n", x);
    }
    else {
        printf("%s\n", y);
    }

    return 0;
}