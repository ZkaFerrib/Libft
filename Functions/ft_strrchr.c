/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:24:07 by gafernan          #+#    #+#             */
/*   Updated: 2022/06/08 12:50:03 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *str, int ch)
{
	int		x;
	char	a;

	a = ch;
	x = 0;

	while (str[x])
		x++;
	if (d == 0)
		return ((char *) &s[x]);
	x--;
	while (x >= 0)
	{
		if (s[x] == d)
		{
			return ((char *) &s[x]);
		}
		x--;
	}
	return (NULL);
}
