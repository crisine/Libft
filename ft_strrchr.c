/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 12:53:05 by misung            #+#    #+#             */
/*   Updated: 2021/12/09 13:20:35 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*pt;

	pt = NULL;
	while (*str)
	{
		if (*str == (char)c)
		{
			pt = (char *)str;
		}
		str++;
	}
	return (pt);
}
