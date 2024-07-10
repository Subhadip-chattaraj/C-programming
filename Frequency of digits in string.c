#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int t, d, c;
    t = strlen(s);
    for (int i = 0; i <= 9; i++)
    {
        d = 48 + i;
        c = 0;
        for (int j = 0; j < t; j++)
        {
            if (d == (int)s[j])
                c++;
        }
        printf("%d", c);
    }
    free(s);
    return 0;
}