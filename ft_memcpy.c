#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *nd;
    unsigned char *ns;

    nd = (unsigned char*)dest;
    ns = (unsigned char*)src;
    while (n)
    {
        nd[n] = ns[n];
        n--;
    }
    return nd;
}

