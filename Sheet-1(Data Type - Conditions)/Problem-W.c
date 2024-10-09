#include <stdio.h>
int main() {
    int a, b;
    char s, q;
    long long c;
    scanf("%d %c %d %c %lld", &a, &s, &b, &q, &c);

    if(s == '+') {
        if(a+b == c)
            printf("Yes");
        else
            printf("%d", a+b);
    }
    else if(s == '-') {
        if(a-b == c)
            printf("Yes");
        else
            printf("%d", a-b);
    }
    else {
        if(a*b == c)
            printf("Yes");
        else
            printf("%d", a*b);
    }

    return 0;
}