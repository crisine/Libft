/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:06:05 by misung            #+#    #+#             */
/*   Updated: 2021/12/10 16:11:51 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*ret;

	len = ft_strlen(str) + 1;
	ret = (char *)malloc(sizeof(char) * len);
	ft_strlcpy(ret, str, len);
	return (ret);
}
