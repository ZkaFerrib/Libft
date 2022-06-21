/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:27:08 by gafernan          #+#    #+#             */
/*   Updated: 2022/06/21 19:39:34 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memmove(void *dst, void *src, size_t len)
{
	size_t	a;

	a = 0;
	if (!src && !dst)
		return (NULL);
	if (src < dst)
	{
		while (len--)
		{
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
		else
		{
			while (a < len)
			{
				((unsigned char *)dst)[a] = ((unsigned char *)src)[a];
				a++;
			}
		}
		return (dst);
	}
}
