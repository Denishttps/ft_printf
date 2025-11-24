/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:49:53 by dbobrov           #+#    #+#             */
/*   Updated: 2025/11/24 16:36:25 by dbobrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"


static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char *strs_format(char *str, va_list args, size_t lstr)
{
	size_t	i;
	char	*new_str;
	
	
}

int ft_printf(const char *str, ...)
{
    va_list	args;
    size_t	i;
    size_t	args_c;
	char	**splited_str;
	char	*new_str;
    
	args_c = 0;
    i = 0;
    while (str[i])
    {
        if (str[i] == '%' && is_in_set(str[i + 1], "cspdiuxX"))
            args_c++;
        i++;
    }
	va_start(args, args_c);
	new_str = strs_format(str, args, ft_strlen(str));
	va_end(args);
	return (0);
}

