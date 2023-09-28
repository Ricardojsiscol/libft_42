/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsisco-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:36:32 by rsisco-l          #+#    #+#             */
/*   Updated: 2023/09/15 13:50:46 by rsisco-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static const char	*skip_and_check(const char *str, int *is_neg)
{
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		*is_neg = 1;
		str++;
	}
	else if (*str == '+')
		str++;
	return (str);
}

int	ft_atoi(const char *str)
{
	int			num;
	int			is_neg;
	const char	*str_checked;

	num = 0;
	is_neg = 0;
	str_checked = skip_and_check(str, &is_neg);
	while (*str_checked >= '0' && *str_checked <= '9')
	{
		if ((!is_neg && num == 214748364 && *(str_checked + 1) > 7))
			return (2147483647);
		if ((is_neg && num == 214748364 && *(str_checked + 1) > 8))
			return (-2147483648);
		num = (num * 10) + *str_checked - '0';
		str_checked++;
	}
	if (is_neg)
		return (-num);
	return (num);
}
