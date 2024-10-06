#include <stdio.h>
int main() {
    long long m, n;
    scanf("%lld %lld", &m, &n);

    int last_digit_of_m = m % 10;
    int last_digit_of_n = n % 10;

    // last digit summation
    int sum = last_digit_of_m + last_digit_of_n;
    printf("%d", sum);

    return 0;
}