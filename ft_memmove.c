/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 04:52:15 by misung            #+#    #+#             */
/*   Updated: 2021/12/09 14:04:18 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t num)
{
	unsigned char		*dp;
	unsigned const char	*sp;

	dp = destination;
	sp = source;
	if (source > destination)
	{
		while (num--)
		{
			*dp++ = *sp++;
		}
	}
	else
	{
		dp = destination + (num - 1);
		sp = source + (num - 1);
		while (num--)
		{
			*dp-- = *sp--;
		}	
	}
	return (destination);
}
