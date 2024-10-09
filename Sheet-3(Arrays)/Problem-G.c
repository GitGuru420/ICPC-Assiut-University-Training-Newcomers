#include <stdio.h>
int main() {
    long long n;
    scanf("%lld", &n);

    long long arr[n];
    for(int i=0; i<n; i++) {
        scanf("%lld", &arr[i]);
    }

    long long count = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] == arr[n-1-i]) {
            count ++;
        }
    }

    if(count == n)
        printf("YES");
    else
        printf("NO");

    return 0;
}