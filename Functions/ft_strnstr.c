/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:20:21 by gafernan          #+#    #+#             */
/*   Updated: 2022/06/21 19:41:51 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	x;

	a = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[a] != '\0' && a < len)
	{
		x = 0;
		while (haystack[a + x] == needle[x] && (a + x) < len)
		{
			if (needle[x + 1] == 0)
				return ((char *) & haystack[a]);
			x++;
		}
		a++;
	}
	return (0);
}
