/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 19:19:37 by misung            #+#    #+#             */
/*   Updated: 2021/12/09 20:15:07 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	find_len;

	i = 0;
	if (str == 0 || *find == '\0')
		return ((char *)str);
	while (*str && i < len)
	{
		find_len = 0;
		if (str[i + find_len] == find[find_len])
		{
			while (str[i + find_len] && find[find_len])
			{
				if (str[i + find_len] != find[find_len]
					|| (i + find_len) >= len)
					break ;
				find_len++;
			}
			if (find[find_len] == '\0')
				return (&((char *)str)[i]);
		}
		i++;
	}	
	return (NULL);
}
