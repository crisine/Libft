/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 04:07:38 by misung            #+#    #+#             */
/*   Updated: 2021/12/08 04:29:17 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t num)
{
	unsigned char		*dp;
	unsigned const char	*sp;
	size_t				i;

	dp = destination;
	sp = source;
	i = 0;
	while (i < num)
	{
		dp[i] = sp[i];
		i++;
	}
	return (destination);
}
