/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:14:02 by gafernan          #+#    #+#             */
/*   Updated: 2022/05/27 12:55:58 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "libft.h" */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}

/* int	main(void)
{
	int	b;

	b = 0;
	ft_isalpha();
} */
