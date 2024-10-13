#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);

    int n;
    for(int i=1; i<=t; i++) {
        scanf("%d", &n);
        long long fact = 1;
        if(n == 0)
            printf("%lld", fact);
        else {
            for(int j=1; j<=n; j++) {
                fact *= j;
            }
            printf("%lld\n", fact);
        }
    }

    return 0;
}