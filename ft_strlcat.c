#include "libft.h"

size_t  ft_strlcat (char *dst, const char *src, size_t size)
{
    size_t		len;
    size_t		i;

    len = ft_strlen(src) + ft_strlen(dst);
    if (size <= ft_strlen(dst))
        return (ft_strlen(src) + size);
    while (*dst)
        dst++;
    i = 0;
    while ((i < size - (len - ft_strlen(src)) - 1) && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (len);
}