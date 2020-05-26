#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    if ((char *)src == 0 && (char *)dst == 0)
        return (NULL);
    if ((unsigned char *)src >= (unsigned char *)dst)
        ft_memcpy(dst, src, len);
    else
    {
        while (len > 0)
        {
            ((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
            len--;
        }
    }
    return (dst);
}
