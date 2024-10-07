#include <stdio.h>
    int main() {
        long long x, y;
        scanf("%lld %lld", &x, &y);

        // summation
        printf("%lld + %lld = %lld\n", x, y, (x+y));

        // multiplication
        printf("%lld * %lld = %lld\n", x, y, (x*y));

        // subtraction
        printf("%lld - %lld = %lld\n", x, y, (x-y));

        return 0;
    }