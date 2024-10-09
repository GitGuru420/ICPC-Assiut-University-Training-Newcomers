#include <stdio.h>
int main() {
    long long n;
    scanf("%lld", &n);

    int year = n / 365;
    int month = (n - (year * 365)) / 30;
    int day = (n - (year * 365) - (month * 30));

    printf("%d years\n", year);
    printf("%d months\n", month);
    printf("%d days\n", day);

    return 0;
}