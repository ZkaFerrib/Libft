/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:01:03 by gafernan          #+#    #+#             */
/*   Updated: 2022/06/21 19:41:45 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *str1, char *str2, size_t t)
{
	size_t	a;

	a = 0;
	if (t == 0)
		return (0);
	while ((str1[a] || str2[a]) && a < (t - 1))
	{
		if (str1[a] != str2[a])
			return ((unsigned int)str1[a] - (unsigned int)str2[a]);
		a++;
	}
	return ((unsigned int)str1[a] - (unsigned int)str2[a]);
}

/* int main(void)
{
	char	src1[] = "Hablareh";
	char	src2[] = "Hablareg";
	unsigned int a;

	a = 10;
	printf("%d", ft_strncmp(src1, src2, a));
	return (0);
} */
