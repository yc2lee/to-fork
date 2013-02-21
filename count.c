#include <stdio.h>

struct str {
    char s[201];
};

int main(int argc, char **argv)
{
    int x = 11111111111;

    char *msg = "Hello there! How are you?";
    struct str copied;

    char *p = msg, *q = copied.s; 
    while( (*q++ = *p++) ) ;

    printf("%s", copied.s);

    struct str X = copied;

    putchar('\n');
    printf("%s", X.s);

    return 0;
}
