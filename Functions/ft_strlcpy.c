/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:57:39 by gafernan          #+#    #+#             */
/*   Updated: 2022/07/19 13:39:58 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	res;
	size_t	a;

	a = 0;
	res = 0;
	while (src[res])
			res++;
	if (src == NULL || dest == NULL)
		return (0);
	if (dstsize != 0)
	{
		while (a < (dstsize - 1) && src[a])
		{
			dest[a] = src[a];
			a++;
		}
		dest[a] = '\0';
	}
	return (res);
}
