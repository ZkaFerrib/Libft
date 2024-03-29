/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:24:07 by gafernan          #+#    #+#             */
/*   Updated: 2022/06/29 18:38:22 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	unsigned int	len;
	unsigned char	ch;

	ch = (unsigned char)c;
	str = (char *) s;
	len = ft_strlen(str);
	while (len)
	{
		if (str[len] == ch)
			return (&str[len]);
		len--;
	}
	if (str[len] == ch)
		return (&str[len]);
	return (0);
}
