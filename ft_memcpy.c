/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 16:40:30 by juan-gon          #+#    #+#             */
/*   Updated: 2020/01/21 18:20:39 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t count;

	if (n == 0 || dst == src)
		return (dst);
	count = 0;
	while (count < n)
	{
		*(unsigned char *)(dst + count) = *(const unsigned char *)(src + count);
		count++;
	}
	return (dst);
}
