/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:48:21 by misung            #+#    #+#             */
/*   Updated: 2021/12/09 15:59:35 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	unsigned char	*pt1;
	unsigned char	*pt2;
	size_t			i;

	pt1 = (unsigned char *)ptr1;
	pt2 = (unsigned char *)ptr2;
	i = 0;
	while (i < num)
	{
		if ((pt1[i] != pt2[i])
			|| ((pt1 + i) == NULL || (pt2 + i) == NULL))
		{
			return (pt1[i] - pt2[i]);
		}
		i++;
	}
	return (0);
}
