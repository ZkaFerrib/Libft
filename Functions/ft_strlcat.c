/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:17:02 by gafernan          #+#    #+#             */
/*   Updated: 2022/07/19 13:50:37 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	destlen;
	size_t	srclen;
	size_t	a;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	a = 0;
	if (dstsize == 0)
		return (srclen);
	if (dstsize < destlen)
		return (srclen + dstsize);
	else
	{
		while (src[a] && (destlen + a) < dstsize)
		{
			dest[destlen + a] = src[a];
			a++;
		}
		if ((destlen + a) == dstsize && destlen < dstsize)
			dest[destlen + a - 1] = '\0';
		else
			dest[destlen + a] = '\0';
	}
	return (destlen + srclen);
}
