/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:54:44 by misung            #+#    #+#             */
/*   Updated: 2021/12/10 16:02:53 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	unsigned char	*p;

	if (num == 0 || size == 0)
		return (NULL);
	p = malloc (num * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, num * size);
	return (p);
}
