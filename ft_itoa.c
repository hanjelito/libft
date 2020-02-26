/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 19:42:05 by juan-gon          #+#    #+#             */
/*   Updated: 2020/01/28 20:10:02 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	digito(long n2, int n)
{
	if (n == 0)
		return (1);
	if (n2 < 0)
		return (digito(n2 * -1, n) + 1);
	if (n2 > 0)
		return (digito(n2 / 10, n) + 1);
	return (0);
}

char		*ft_itoa(int n)
{
	long	n2;
	int		count;
	char	*dst;

	n2 = n;
	if ((dst = ft_calloc(1, digito(n2, n) + 1)) == NULL)
		return (NULL);
	if (n == 0)
	{
		*dst = '0';
		return (dst);
	}
	if (n < 0)
		*dst = '-';
	n2 = (n2 < 0 ? n2 * -1 : n2);
	count = (n < 0 ? digito(n2, n) : digito(n2, n) - 1);
	while (n2 > 0)
	{
		*(dst + count) = (n2 > 9) ? n2 % 10 + '0' : n2 + '0';
		count = (n2 > 9 ? --count : count);
		n2 /= 10;
	}
	return (dst);
}
