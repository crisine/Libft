/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 13:04:06 by misung            #+#    #+#             */
/*   Updated: 2021/12/16 16:51:23 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_word_cnt(const char *s, char c)
{
	char			*idx;
	unsigned int	word_cnt;

	idx = (char *)s;
	word_cnt = 0;
	while (*idx != '\0')
	{
		if (*idx == c)
			word_cnt++;
		idx++;
	}
	return (word_cnt + 1);
}

static char	*ft_fill_word(const char *word, unsigned int word_len)
{
	unsigned int	i;
	char			*split_word;

	i = 0;
	split_word = (char *)malloc(sizeof(char) * (word_len + 1));
	if (split_word == NULL)
		return (NULL);
	ft_strlcpy(split_word, word, word_len + 1);
	return (split_word);
}

static bool	ft_fill_split(char **split, const char *s, char c)
{
	size_t			i;
	size_t			len;
	unsigned int	word_cnt;

	i = 0;
	word_cnt = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			len = 0;
			while (s[i + len] != c && s[i + len] != '\0')
				len++;
			split[word_cnt] = ft_fill_word(&s[i], len);
			if (split[word_cnt] == NULL)
				return (false);
			i += len;
			word_cnt++;
		}
	}
	split[word_cnt] = NULL;
	return (true);
}

static void	ft_free_all(char **split)
{
	size_t	i;

	i = 0;
	while (split[i] != NULL)
	{
		free(split);
		i++;
	}
	free(split);
}

char	**ft_split(const char *s, char c)
{
	char			**split;
	unsigned int	word_cnt;
	bool			chk_memory;

	if (s == NULL)
		return (NULL);
	word_cnt = ft_word_cnt(s, c);
	split = (char **)malloc(sizeof(char *) * (word_cnt + 1));
	if (split == NULL)
		return (NULL);
	chk_memory = ft_fill_split(split, s, c);
	if (chk_memory == false)
	{
		ft_free_all(split);
		split = NULL;
	}
	return (split);
}
