/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 13:56:43 by gafernan          #+#    #+#             */
/*   Updated: 2022/06/21 19:38:19 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sum;
	int	sign;

	sum = 0;
	sign = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t' || \
			*str == '\r' || *str == '\v' || *str == '\f')
			str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= 9)
	{
		sum = sum * 10 + *str - '0';
	}
	return (sum * sign);
}
