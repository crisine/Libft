/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:20:22 by misung            #+#    #+#             */
/*   Updated: 2021/12/10 16:37:25 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_isspace(const char *str)
{
	while (*str == ' '
		|| *str == '\n'
		|| *str == '\t'
		|| *str == '\v'
		|| *str == '\f'
		|| *str == '\r')
	{
			str++;
	}
	return (str);
}

static int	ft_sign_judge(const char *str)
{
	int	neg_cnt;

	neg_cnt = 0;
	while ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			neg_cnt++;
		str++;
	}
	if (neg_cnt % 2 == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	if (str == NULL)
		return (0);
	str = ft_isspace(str);
	sign = ft_sign_judge(str);
	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += (*str - '0');
		str++;
	}
	return (sign * result);
}
