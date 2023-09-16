#include <stdio.h>
#include <ctype.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
    const char mid =  *s;
    while (mid++)
    {
        if (mid == (char)c)
            return mid;
    }
    return (s);
}




int main (void)
{
    char test[10] = "papeleria";
    printf("%s\n",strchr(test,'e'));
    printf("%s",test);
    return (0);
}