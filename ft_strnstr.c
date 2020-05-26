#include "libft.h"

char    ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t	len_td;

    len_td = ft_strlen(little);
    if (!*little)
        return ((char *)big);
    while (*big && n-- >= len_td)
    {
        if (*big == *little && ft_memcmp(big, little, len_td) == 0)
            return ((char *)big);
        big++;
    }
    return (NULL);
}