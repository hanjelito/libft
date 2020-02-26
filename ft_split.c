/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-gon <juan-gon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 13:42:34 by juan-gon          #+#    #+#             */
/*   Updated: 2020/01/27 19:39:27 by juan-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		count_number_string(const char *s, char c)
{
	size_t count;

	count = (*s == c ? 0 : 1);
	while (*s)
		if (*s == c && *(s + 1) != c && *(s + 1) != 0)
			++count && ++s;
		else
			++s;
	return (count);
}

static	char	*next_string(const char *s, char c, size_t *index)
{
	size_t	nxt;
	char	*dst;

	while (*(s + *index) == c && *(s + *index))
		*index = *index + 1;
	if (*(s + *index) == 0)
		return (NULL);
	nxt = *index;
	while (*(s + nxt + 1) != c && *(s + nxt + 1))
		nxt++;
	dst = ft_substr(s, *index, nxt - *index + 1);
	*index = nxt + 1;
	return (dst);
}

char			**ft_split(const char *s, char c)
{
	size_t	index;
	size_t	count;
	char	**dst;

	if (!s || !(dst = (char **)malloc(sizeof(char *) *
					(count_number_string(s, c) + 1))))
		return (NULL);
	index = 0;
	count = 0;
	while ((*(dst + count) = next_string(s, c, &index)) != NULL)
		count++;
	return (dst);
}
