/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 04:52:15 by misung            #+#    #+#             */
/*   Updated: 2021/12/08 10:43:37 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t num)
{
	unsigned char		*dp;
	unsigned const char	*sp;
	size_t				i;

	dp = destination;
	sp = source;
	i = 0;
	if (source > destination)
	{
		while (i < num)
		{
			dp[i] = sp[i];
			i++;
		}	
	}
	else
	{
		i = num - 1;
		while (i > 0)
		{
			dp[i] = sp[i];
			i--;
		}
	}
	return (destination);
}
