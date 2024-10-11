#include <stdio.h>
int main() {
    long long x;
    scanf("%lld", &x);

    long long count = 0;
    for(int i=2; i<=x; i++) {
        if(x % i == 0) {
            count++;
        }
    }
    
    if(count == 1) 
        printf("YES");
    else
        printf("NO");

    return 0;
}