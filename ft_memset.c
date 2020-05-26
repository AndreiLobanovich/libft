#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    char *s1;
    if (s == NULL)
        return (NULL);
    s1 = s;
    while (n)
    {
        *s1 = c;
        n--;
        s++;
    }
    return (s);
}
