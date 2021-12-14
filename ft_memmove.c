/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 04:52:15 by misung            #+#    #+#             */
/*   Updated: 2021/12/13 19:25:49 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t num)
{
	unsigned char		*dp;
	unsigned char		*sp;
	char				step;
	size_t				i;

	if (destination == NULL && source == NULL)
		return (NULL);
	dp = (unsigned char *)destination;
	sp = (unsigned char *)source;
	step = 1;
	i = 0;
	if (destination > source)
	{
		step = -1;
		dp = (unsigned char *)(destination + num - 1);
		sp = (unsigned char *)(source + num - 1);
	}
	while (i < num)
	{
		*dp = *sp;
		dp += step;
		sp += step;
		i++;
	}
	return (destination);
}
