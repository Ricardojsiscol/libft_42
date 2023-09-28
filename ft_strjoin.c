/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsisco-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:39:01 by rsisco-l          #+#    #+#             */
/*   Updated: 2023/09/15 14:51:54 by rsisco-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		full_len;

	full_len = ft_strlen(s1) + ft_strlen(s2);
	s3 = malloc(full_len * sizeof(char) + 1);
	if (s3 == 0)
		return (0);
	while (*s1)
		*s3++ = *s1++;
	while (*s2)
		*s3++ = *s2++;
	*s3 = '\0';
	return (s3 - full_len);
}
