/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:39:41 by misung            #+#    #+#             */
/*   Updated: 2021/12/09 15:45:03 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *ptr, int value, size_t num)
{
	unsigned char	*pt;
	size_t			i;

	pt = ptr;
	i = 0;
	while (i < num)
	{
		if (pt[i] == (unsigned char)value)
		{
			return (pt + i);
		}
		i++;
	}
	return (NULL);
}
