/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:54:38 by gafernan          #+#    #+#             */
/*   Updated: 2022/06/21 20:26:02 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strdup(const char *s1)
{
	char	*c;

	c = malloc(ft_strlen(s1) + 1);
	if (c == NULL)
		return (c);
	ft_strlcpy(c, s1, ft_strlen(s1) +1);
	return (c);
}
