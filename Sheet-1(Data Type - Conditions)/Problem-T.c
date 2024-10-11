#include <stdio.h>
int main() {
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    if(a>b) {
        if(b>c) {
            // a>b>c
            printf("%lld\n%lld\n%lld\n", c, b, a);
            printf("\n%lld\n%lld\n%lld", a, b, c);
        }
        else {
            if(a>c) {
                // a>c>b
                printf("%lld\n%lld\n%lld\n", b, c, a);
                printf("\n%lld\n%lld\n%lld", a, b, c);
            }
            else {
                // c>a>b
                printf("%lld\n%lld\n%lld\n", b, a, c);
                printf("\n%lld\n%lld\n%lld", a, b, c);
            }
        }
    }
    else {
        if(b>c) {
            if(a>c) {
                // b>a>c
                printf("%lld\n%lld\n%lld\n", c, a, b);
                printf("\n%lld\n%lld\n%lld", a, b, c);
            }
            else {
                // b>c>a
                printf("%lld\n%lld\n%lld\n", a, c, b);
                printf("\n%lld\n%lld\n%lld", a, b, c);
            }
        }
        else {
            // c>b>a
            printf("%lld\n%lld\n%lld\n", a, b, c);
            printf("\n%lld\n%lld\n%lld", a, b, c);
        }
    }

    return 0;
}