/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:28:37 by gafernan          #+#    #+#             */
/*   Updated: 2022/03/30 14:07:37 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "libft.h" */

int	ft_toupper(int c)
{	
	if (c <= 'z' && c >= 'a')
		return (c -= 32);
	return (c);
}
