#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int evenCount = 0, oddCount = 0, positiveCount = 0, negativeCount = 0;
    for(int i=1; i<=n; i++) {
        int x;
        scanf("%d", &x);
        if(x % 2 == 0) {
            evenCount++;
            if(x > 0) 
                positiveCount++;
            else if(x < 0)
                negativeCount++;
        }
        else {
            oddCount++;
            if(x > 0) 
                positiveCount++;
            else if(x < 0)
                negativeCount++;
        }
    }
    
    printf("Even: %d\n", evenCount);
    printf("Odd: %d\n", oddCount);
    printf("Positive: %d\n", positiveCount);
    printf("Negative: %d\n", negativeCount);

    return 0;
}