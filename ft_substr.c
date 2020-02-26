/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:49:18 by juan-gon          #+#    #+#             */
/*   Updated: 2020/01/24 14:56:46 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	char	*dst;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	len = ((ft_strlen(s + start) < len) ? ft_strlen(s + start) : len);
	if ((dst = malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	count = 0;
	while (count < len)
	{
		*(dst + count) = *(s + count + start);
		count++;
	}
	*(dst + count) = '\0';
	return (dst);
}
