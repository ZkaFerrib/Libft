/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:01:53 by gafernan          #+#    #+#             */
/*   Updated: 2022/06/08 13:54:06 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memset(void *a, int c, size_t len)
{
	size_t	b;
	char	*t;

	t = a;
	b = a;
	while (b < len)
	{
		t[b] = c;
		b++;
	}
	return (a);
}
