/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:23:22 by gafernan          #+#    #+#             */
/*   Updated: 2022/03/30 15:27:23 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "libft.h" */

int	ft_strncmp(char *s1, char *s2, unsigned t)
{
	unsigned int	b;

	b = 0;
	while (b < t && s1[b] && s2[b] && s1[b] == s2[b])
	{
		b++;
	}
	if (b < t)
		return (s1[b] - s2[b]);
	else
		return (0);
}
