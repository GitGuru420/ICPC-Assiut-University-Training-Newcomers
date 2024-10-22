#include <stdio.h>
#include <string.h>
int main() {
    char s[1000001];
    scanf("%s", &s);

    long long len = strlen(s);
    long long count = 0;
    for(int i=0; i<len; i++) {
        s[i] = s[i] - '0';
        count += s[i];
    }
    printf("%lld\n", count);

    return 0;
}