#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char *nd;
    unsigned char *ns;

    nd = (unsigned char*)dest;
    ns = (unsigned char*)src;
    while (n && ns[n] != c)
    {
        nd[n] = ns[n];
        n--;
    }
    if (ns[n] == c)
        return NULL;
    else
        return nd;
}
