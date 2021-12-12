/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:23:40 by misung            #+#    #+#             */
/*   Updated: 2021/12/10 17:34:00 by misung           ###   ########.fr       */
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

int	ft_atoi(const char *str)
{
	int		result;
	int		sign;
	char	*p;

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
	while (*p >= '0' && *p <= '9')
	{
		result *= 10;
		result += ((*p) - '0');
		p++;
	}
	return (result * sign);
}
