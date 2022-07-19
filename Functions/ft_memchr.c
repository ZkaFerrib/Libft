/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:35:37 by gafernan          #+#    #+#             */
/*   Updated: 2022/07/19 14:06:50 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	a;

	a = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[a] == (unsigned char)c)
			return (((unsigned char *)s) + a);
		a++;
	}
	return (NULL);
}	
