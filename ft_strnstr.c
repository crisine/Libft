/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:19:37 by misung            #+#    #+#             */
/*   Updated: 2021/12/14 12:23:04 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	if (*find == '\0')
		return ((char *)str);
	if (len == 0 || *str == '\0')
		return (NULL);
	i = 0;
	j = 0;
	while (1)
	{
		if (find[j] == '\0')
			return ((char *)(str + (i - j)));
		if (str[i] == find[j])
			j++;
		else
		{
			i -= j;
			j = 0;
		}
		if (str[i] == '\0' || i >= len)
			return (NULL);
		i++;
	}
}
