/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsisco-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:39:34 by rsisco-l          #+#    #+#             */
/*   Updated: 2023/09/15 14:56:02 by rsisco-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_strs(char const *s, char c)
{
	int	count;

	count = 0;
	if (!*s)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		word_end;

	i = 0;
	strs = (char **)malloc((count_strs(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (ft_strchr(s, c) != NULL)
				word_end = ft_strchr(s, c) - s;
			else
				word_end = ft_strlen(s);
			strs[i++] = ft_substr(s, 0, word_end);
			s += word_end;
		}
	}
	strs[i] = NULL;
	return (strs);
}
