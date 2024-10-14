#include <stdio.h>
int main() {
    int x, p;
    scanf("%d %d", &x, &p);

    float percentage_amount = (float)x / 100;
    float op = p / (1 - percentage_amount);
    printf("%.2f", op);

    return 0;
}