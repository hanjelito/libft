/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 13:40:43 by juan-gon          #+#    #+#             */
/*   Updated: 2020/01/22 16:14:35 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t count;

	if (!s1 && !s2)
		return (0);
	count = 0;
	while (count < n)
	{
		if (*(unsigned char *)(s1 + count) != *(unsigned char *)(s2 + count))
		{
			return (*(unsigned char *)(s1 + count)
					- *(unsigned char *)(s2 + count));
		}
		count++;
	}
	return (0);
}
