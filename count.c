#include <stdio.h>

struct str {
    char s[201];
};

int main(int argc, char **argv)
{
    char *msg = "Hello there!";
    struct str copied;
    for(int i = 0; i < 201; i ++)
        copied.s[i] = '?';

    char *p = msg, *q = copied.s; 
    while( (*q++ = *p++) ) ;

    printf("%s", copied.s);

    return 0;
}
