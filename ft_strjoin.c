/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 20:30:30 by misung            #+#    #+#             */
/*   Updated: 2021/12/10 20:52:26 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	joined_len;
	char	*joined_str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	joined_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	joined_str = (char *)malloc(sizeof(char) * joined_len);
	if (joined_str == NULL)
		return (NULL);
	ft_strlcpy(joined_str, s1, ft_strlen(s1) + 1);
	ft_strlcat(joined_str, s2, joined_len);
	return (joined_str);
}
