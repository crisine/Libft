/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 18:01:00 by misung            #+#    #+#             */
/*   Updated: 2021/12/12 18:10:16 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	size_t	len;

	len = ft_strlen(ft_itoa(n));
	if (fd < 0)
		return ;
	write(fd, ft_itoa(n), len);
}
