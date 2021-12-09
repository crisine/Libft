/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 08:36:28 by misung            #+#    #+#             */
/*   Updated: 2021/12/09 14:36:47 by misung           ###   ########.fr       */
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
size_t	ft_strlen(const char *str);

void	ft_bzero(void *to, size_t count);

void	*ft_memset(void *ptr, int value, size_t num);
void	*ft_memcpy(void *destination, const void *source, size_t num);
void	*ft_memmove(void *destination, const void *source, size_t num);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);

#endif
