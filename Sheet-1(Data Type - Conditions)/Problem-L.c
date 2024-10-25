#include <stdio.h>
#include <string.h>
int main() {
    char f1[100], s1[100];
    char f2[100], s2[100];

    scanf("%s %s", f1, s1);
    scanf("%s %s", f2, s2);

    int cmp = strcmp(s1, s2);
    if(cmp == 0)
        printf("ARE Brothers\n");
    else
        printf("NOT\n");

    return 0;
}