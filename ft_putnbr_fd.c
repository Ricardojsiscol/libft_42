/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsisco-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:35:38 by rsisco-l          #+#    #+#             */
/*   Updated: 2023/09/15 16:45:38 by rsisco-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*num;
	int		num_len;

	num = ft_itoa(n);
	num_len = ft_strlen(num);
	write(fd, num, num_len);
	free(num);
}
