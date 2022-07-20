/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:09:33 by gafernan          #+#    #+#             */
/*   Updated: 2022/07/20 18:15:23 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	coincidences(char const *s, char c)
{
	int	i;
	int	checkw;

	i = 0;
	checkw = 0;
	while (*s)
	{
		if (*s != c && checkw == 0)
		{
			checkw = 1;
			i++;
		}
		else if (*str == c)
			checkw = 0;
		s++;
	}
	return (i);
}

static char	wordlen(const char *s, int start, int finish)
{
	
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	substring;
	size_t	i;

	if (!s)
		return (NULL);
	substring = ft_size_substring(s, c);
}
