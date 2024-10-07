#include <stdio.h>
int main() {
    long long n, summation;
    scanf("%lld", &n);

    // Natural number summation formula
    summation = n * (n+1) /2;
    printf("%lld", summation);

    return 0;
}