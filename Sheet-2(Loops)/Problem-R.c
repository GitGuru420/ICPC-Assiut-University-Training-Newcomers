#include <stdio.h>
int main()
{
    int n, m;
    while(scanf("%d %d", &n, &m) != EOF) {
        int sum = 0;
        if(n <= 0 || m <= 0) {
            break;
        }
        else if (n < m) {
            for (int i = n; i <= m; i++) {
                printf("%d ", i);
                sum += i;
            }
            printf(" sum =%d\n", sum);
        }
        else {
            for (int i = m; i <= n; i++) {
                printf("%d ", i);
                sum += i;
            }
            printf(" sum =%d\n", sum);
        }
    }

    return 0;
}