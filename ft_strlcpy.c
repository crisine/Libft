/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 16:01:39 by misung            #+#    #+#             */
/*   Updated: 2021/12/16 18:10:15 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *destination, const char *source, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = (size_t)ft_strlen(source);
	if (!destination || !source)
		return (0);
	while (i < len && i + 1 < size)
	{
		destination[i] = source[i];
		i++;
	}
	if (size > 0)
		destination[i] = '\0';
	return (len);
}
