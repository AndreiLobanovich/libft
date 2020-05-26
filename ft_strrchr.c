#include "libft.h"

char    *ft_strrchr (const char *str, int ch)
{
    size_t	len;
    char	*find;

    len = ft_strlen(str);
    find = (char *)(str + len);
    len += 1;
    while (len--)
    {
        if (*find == (unsigned char)ch)
            return (find);
        find--;
    }
    return (NULL);
}