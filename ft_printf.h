/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:48:04 by dbobrov           #+#    #+#             */
/*   Updated: 2025/11/29 20:01:30 by dbobrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

size_t	putstr(char *str);
size_t	putptr(void *ptr);
size_t	putnbr(int n);
size_t	putuint(unsigned int n);
size_t	puthex(unsigned long n, int letter_case);
int		ft_printf(const char *str, ...);
size_t	printchar(char c);

#endif