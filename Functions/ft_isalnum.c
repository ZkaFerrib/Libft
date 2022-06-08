/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 13:52:58 by gafernan          #+#    #+#             */
/*   Updated: 2022/05/30 14:01:34 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_isalnum(int c)
{
	if ((c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a'))
	{
		return (1);
	}
	else if (c <= '9' && c >= '0')
	{
		return (2);
	}
	else
		return (0);
}

/* int	main(void)
{
	int	a;

	a = '6';
	printf("%d", ft_isalnum(a));
} */
