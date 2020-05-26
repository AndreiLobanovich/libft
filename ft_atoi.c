#include "libft.h"

int	ft_atoi(const char *str)
{
    int sign;
    int res;

    sign = 1;
    res = 0;
    while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\r' || *str == ' ')
        str++;
    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while (ft_isdigit(*str))
        res = (res * 10) + (*str++ - '0');
    res *= sign;
    return (res);
}
