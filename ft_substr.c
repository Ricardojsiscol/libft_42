/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsisco-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:38:46 by rsisco-l          #+#    #+#             */
/*   Updated: 2023/09/15 12:38:48 by rsisco-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subptr;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	if (s_len < start)
		return (ft_strdup(""));
	if ((s_len - start) < len)
		len = s_len - start;
	subptr = (char *)malloc(len * sizeof(char) + 1);
	if (!subptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		subptr[i] = s[start + i];
		i++;
	}
	subptr[i] = '\0';
	return (subptr);
}
