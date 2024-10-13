#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    long long x, y;
    for (int i = 1; i <= t; i++) {
        scanf("%lld %lld", &x, &y);
        long long sum = 0;
        if (x < y) {
            for (int j = x + 1; j < y; j++) {
                if (j % 2 != 0) {
                    sum += j;
                }
            }
            printf("%lld\n", sum);
        }
        else {
            for (int j = y + 1; j < x; j++) {
                if (j % 2 != 0) {
                    sum += j;
                }
            }
            printf("%lld\n", sum);
        }
    }

    return 0;
}