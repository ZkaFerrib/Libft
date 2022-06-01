/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:36:40 by gafernan          #+#    #+#             */
/*   Updated: 2022/06/01 15:57:19 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h>*/

char	*ft_strchr(const char *s, int c)
{
	unsigned char	p;

	p = c;
	while (*s != '\0' && *s != p)
		s++;
	if (*s == p)
		return ((char *)s);
	return (NULL);
}