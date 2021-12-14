/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:29:53 by misung            #+#    #+#             */
/*   Updated: 2021/12/12 20:05:17 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num)
	{
		if ((*str1 != *str2)
			|| (str1 == NULL || str2 == NULL)
			|| (*str1 == '\0' || *str2 == '\0'))
		{
			return ((unsigned char)*str1 - (unsigned char)*str2);
		}
		i++;
		str1++;
		str2++;
	}
	return (0);
}
