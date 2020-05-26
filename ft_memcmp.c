#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *n1;
    unsigned char *n2;
    int i;

    i = 0;
    n1 = (const char *) s1;
    n2 = (const char *) s2;
    while (i < n && n1[i] == n2[i])
    {
        i++;
    }
    if (n1[i] > n2[i])
        return (1);
    else if (n1[i] < n2[i])
        return (-1);
    else
        return (0);
}
