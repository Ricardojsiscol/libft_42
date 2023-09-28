/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsisco-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:39:49 by rsisco-l          #+#    #+#             */
/*   Updated: 2023/09/15 16:52:15 by rsisco-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	len;

	len = 1;
	if (n < 0 && n > -2147483648)
	{
		n = -n;
		len++;
	}
	else if (n == 0)
		return (1);
	else if (n == -2147483648)
	{
		n = 2147483647;
		len++;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		numlen;
	char	*str;

	numlen = ft_numlen(n);
	str = (char *)malloc(numlen * sizeof(char) + 1);
	if (!str)
		return (0);
	str[numlen] = '\0';
	if (n < 0)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	while (n)
	{
		if (n > 0)
			str[--numlen] = n % 10 + '0';
		else
			str[--numlen] = n % 10 * -1 + '0';
		n /= 10;
	}
	return (str);
}
