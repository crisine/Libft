/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:21:41 by misung            #+#    #+#             */
/*   Updated: 2021/12/09 20:36:44 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *destination, const char *source, size_t size)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = 0;
	srclen = 0;
	while (*destination != '\0')
	{
		if (size <= dstlen)
			return (ft_strlen(source) + size);
		destination++;
		dstlen++;
	}
	while (*source != '\0' && dstlen + srclen + 1 < size)
	{
		*destination++ = *source++;
		srclen++;
	}
	while (*source++ != '\0')
		srclen++;
	*destination = '\0';
	return (srclen + dstlen);
}
