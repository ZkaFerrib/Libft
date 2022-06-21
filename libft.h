/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:24:18 by gafernan          #+#    #+#             */
/*   Updated: 2022/06/21 19:54:58 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

int		ft_isalnum(int c);
int		ft_atoi(const char *str);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_bzero(void *s, size_t n);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_memmove(void *dst, void *src, size_t len);
int		ft_memset(void *a, int c, size_t len);
char	*ft_strchr(const char *s, int c);
int		ft_strlcat(char *dest, const char *src, size_t dstsize);
int		ft_strlcpy(char *dest, const char *src, size_t dstsize);
int		ft_strlen(char *str);
int		ft_strncmp(char *str1, char *str2, size_t t);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *str, int ch);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif