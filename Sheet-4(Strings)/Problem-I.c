#include <stdio.h>
#include <string.h>
int main() {
    char s1[1001], s2[1001];
    scanf("%s", &s1);

    int len_s1 = strlen(s1);
    for(int i=len_s1-1, j=0; i>=0; i--, j++) {
        s2[j] = s1[i];
    }
    s2[len_s1] = '\0';

    int cmp = strcmp(s2, s1);
    if(cmp == 0) 
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}