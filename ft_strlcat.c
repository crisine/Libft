/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:21:41 by misung            #+#    #+#             */
/*   Updated: 2021/12/09 18:35:47 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *destination, const char *source, size_t size)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(destination);
	srclen = 0;
	while (*destination != '\0')
	{
		destination++;
	}
	while (*source != '\0' && dstlen + srclen + 1 < size)
	{
		*destination++ = *source++;
		srclen++;
	}
	*destination = '\0';
	if (size <= dstlen)
		return (srclen + size);
	return (srclen + dstlen);
}
