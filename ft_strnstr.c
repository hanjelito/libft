/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 21:15:23 by juan-gon          #+#    #+#             */
/*   Updated: 2020/01/30 16:15:37 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	count;
	size_t	nlen;

	if (haystack == needle)
		return ((char*)haystack);
	if (needle[0] == '\0' || haystack == needle)
		return ((char *)haystack);
	nlen = ft_strlen(needle);
	if (nlen == 0)
		return ((char *)haystack);
	count = 0;
	while (*(haystack + count) && nlen <= len--)
	{
		if (!ft_strncmp((char *)(haystack + count), (char *)needle, nlen))
			return ((char *)(haystack + count));
		count++;
	}
	return (NULL);
}
