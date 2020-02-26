/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 08:27:15 by juan-gon          #+#    #+#             */
/*   Updated: 2020/01/18 09:40:51 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *c)
{
	char	*newc;
	int		count;
	int		len;

	len = ft_strlen(c);
	if (!(newc = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	count = 0;
	while (c[count])
	{
		newc[count] = c[count];
		count++;
	}
	newc[count] = '\0';
	return (newc);
}
