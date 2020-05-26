#include "libft.h"

char    *ft_strdup(const char *src)
{
    size_t	i;
    size_t	len;
    char	*str;

    len = 0;
    i = 0;
    while (src[len])
        len++;
    if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    while (i < len)
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}