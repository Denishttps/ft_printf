/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbobrov <dbobrov@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 21:25:12 by dbobrov           #+#    #+#             */
/*   Updated: 2025/11/26 21:25:12 by dbobrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	putptr(void *ptr)
{
	size_t	len;

	len = 0;
	len += write(1, "0x", 2);
	len += puthex((unsigned long)ptr, 'x');
	return (len);
}
