/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:14:01 by gafernan          #+#    #+#             */
/*   Updated: 2022/06/21 19:37:59 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_calloc(size_t count, size_t size)
{
	void	*a;

	a = malloc(size * count);
	if (a == NULL)
		return (a);
	ft_bzero (a, size * count);
	return (a);
}
