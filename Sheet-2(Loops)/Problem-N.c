#include <stdio.h>
int main() {
    char s;
    int n, x;
    scanf("%c %d", &s, &n);

    for(int i=1; i<=n; i++) {
        scanf("%d", &x);
        for(int j=1; j<=x; j++) {
            printf("%c", s);
        }
        printf("\n");
    }

    return 0;
}