/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:05:48 by gafernan          #+#    #+#             */
/*   Updated: 2022/06/29 15:13:52 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*substr;
	unsigned int		length;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	if (len <= 0 || start >= length)
	{
		substr = (char *)malloc(1);
		substr[0] = '/0';
		return (substr);
	}
	if (len > length)
		len = length - start;
	substr = malloc (sizeof(*s) * (len + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, &s[start], len + 1);
	return (substr);
}
