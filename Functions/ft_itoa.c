/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 14:22:15 by gafernan          #+#    #+#             */
/*   Updated: 2022/07/19 16:47:00 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_fillstr( char *str, long num, int neg, int len)
{
	if (num == 0)
		str[0] =
}

char *ft_itoa(int n)
{
	long	num;
	int		len;
	int		neg;
	char	*str;

	num = n;
	neg = 0;
	len = 0;
	if (num < 0)
	{
		n = n / 10;
		len++;
	}
	if (num == 0)
		len = 1;
		str = (char *)malloc(sizeof(char) * (len + neg + 1));
		if (str == NULL)
			return (NULL);
		return (ft_fillstr(str, num, neg, len));
}	