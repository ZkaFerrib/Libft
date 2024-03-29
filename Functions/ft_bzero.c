/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:05:30 by gafernan          #+#    #+#             */
/*   Updated: 2022/06/21 19:38:29 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	t;

	t = 0;
	while (t < n)
	{
		((char *)s)[t] = 0;
		t++;
	}
}

/* int	main()
{
	void *str = malloc(10);
	 
	ft_bzero(str, 3);
	printf("%s", (char *)str);
} */
