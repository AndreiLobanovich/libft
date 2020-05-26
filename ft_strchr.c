#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
    char	*s;

    s = (char *)string;
    while (*s != c)
    {
        if (!*s)
            return (NULL);
        s++;
    }
    return (s);
}