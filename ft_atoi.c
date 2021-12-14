/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:23:40 by misung            #+#    #+#             */
/*   Updated: 2021/12/14 12:12:34 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_isspace(char *str)
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

static int	ft_isdigit_st(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

static int	ft_check_exception(const char *str, int sign)
{
	char	*p;
	size_t	len;

	len = 0;
	p = (char *)str;
	while (ft_isdigit_st(*p))
	{
		len++;
		p++;
	}
	if (len > 20)
	{
		if (sign == 1)
			return (-1);
		return (0);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	long long	result;
	int			sign;
	char		*p;

	if (str == NULL)
		return (0);
	result = 0;
	p = (char *)str;
	p = ft_isspace(p);
	sign = 1;
	if (*p == '-' || *p == '+')
	{
		if (*p == '-')
			sign = -1;
		p++;
	}
	if (ft_check_exception(p, sign) <= 0)
		return (ft_check_exception(p, sign));
	while (ft_isdigit_st(*p))
	{
		result *= 10;
		result += ((*p) - '0');
		p++;
	}
	return (result * sign);
}
