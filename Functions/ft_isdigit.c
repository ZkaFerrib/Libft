/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:31:59 by gafernan          #+#    #+#             */
/*   Updated: 2022/06/21 19:39:09 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c <= '9' && c >= '0') || (c <= '9' && c >= '0'))
	{
		return (1);
	}
	else
		return (0);
}

/* int	main(void)
{
	int	a;

	a = 'g';
	printf("%d", ft_isdigit(a));
} */
