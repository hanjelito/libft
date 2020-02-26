/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 20:28:49 by juan-gon          #+#    #+#             */
/*   Updated: 2020/01/25 20:11:26 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t pre_x;
	size_t pos_x;

	if (!s1 || !set)
		return (NULL);
	pre_x = 0;
	while (s1[pre_x] && ft_strchr(set, s1[pre_x]))
		pre_x++;
	pos_x = ((int)ft_strlen(s1) - 1 >= 0 ? ft_strlen(s1) - 1 : 0);
	while (pos_x > 0 && pos_x > pre_x && ft_strchr(set, s1[pos_x]))
		pos_x--;
	return (ft_substr(s1, pre_x, pos_x - pre_x + 1));
}
