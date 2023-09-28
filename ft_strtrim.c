/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsisco-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:39:17 by rsisco-l          #+#    #+#             */
/*   Updated: 2023/09/15 14:54:52 by rsisco-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*tstr;

	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[start]) && *s1)
		start++;
	if (start > end)
	{
		tstr = malloc(1);
		if (!tstr)
			return (0);
		else
			*tstr = '\0';
		return (tstr);
	}
	while (ft_strchr(set, s1[end]) && end >= 0)
		end--;
	tstr = malloc(end - start + 2);
	if (!tstr)
		return (0);
	ft_strlcpy(tstr, &s1[start], end - start + 2);
	return (tstr);
}
