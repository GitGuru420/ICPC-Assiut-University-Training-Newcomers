#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    char s[1001];
    for (int i=1; i<=t; i++) {
        scanf("%s", &s);
        int length = strlen(s);
        if(length > 10) {
            char first_char = s[0];
            char last_char = s[length-1];
            int f_to_l_char = length-2;
            printf("%c%d%c\n", first_char, f_to_l_char, last_char);
        }
        else {
            printf("%s\n", s);
        }
    }

    return 0;
}