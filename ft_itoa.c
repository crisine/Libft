/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 16:42:21 by misung            #+#    #+#             */
/*   Updated: 2021/12/12 17:09:32 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_int_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t		len;
	char		*res;
	long long	num;

	num = n;
	len = ft_int_len(num);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	if (num < 0)
	{
		res[0] = '-';
		num = -num;
	}
	else if (num == 0)
		res[0] = '0';
	res[len--] = '\0';
	while (num)
	{
		res[len] = num % 10 + '0';
		len--;
		num /= 10;
	}
	return (res);
}
