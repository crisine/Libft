/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 08:36:28 by misung            #+#    #+#             */
/*   Updated: 2021/12/09 19:26:42 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_strncmp(const char *str1, const char *str2, size_t num);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *destination, const char *source, size_t size);
size_t	ft_strlcat(char *destination, const char *source, size_t maxlen);

void	ft_bzero(void *to, size_t count);

void	*ft_memset(void *ptr, int value, size_t num);
void	*ft_memcpy(void *destination, const void *source, size_t num);
void	*ft_memmove(void *destination, const void *source, size_t num);
void	*ft_memchr(void *ptr, int value, size_t num);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);

#endif
