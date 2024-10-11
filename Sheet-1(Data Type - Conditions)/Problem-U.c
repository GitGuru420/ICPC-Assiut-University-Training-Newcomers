#include <stdio.h>
int main() {
    float n;
    scanf("%f", &n);

    int convert_int = (int)n;
    float sub = n - convert_int;

    if(sub == 0) 
        printf("int %d", convert_int);
    else
        printf("float %d %f", convert_int, sub);

    return 0;
}