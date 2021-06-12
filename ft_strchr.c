/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 16:44:13 by juan-gon          #+#    #+#             */
/*   Updated: 2020/01/22 18:16:48 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	count;

	count = 0;
	while (*(s + count))
	{
		if (*(char *)(s + count) == (char)c)
			return ((char *)(s + count));
		count++;
	}
	if ((char)c == 0)
		return ((char *)(s + count));
	return (0);
}
