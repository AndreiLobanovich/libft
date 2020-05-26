#include "libft.h"

int	ft_isprint(int ch)
{
    if (ch >= 040 && ch <= 0176)
        return (1);
    return (0);
}

