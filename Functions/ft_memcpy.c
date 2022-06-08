/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:16:20 by gafernan          #+#    #+#             */
/*   Updated: 2022/06/08 15:25:54 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	x;

	x = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (x < n)
	{
		((unsigned char *) dst)[x] = ((unsigned char *) src)[x];
		x++;
	}
	return (dst);
}

int main()
{ 	char array1[] = "Muchachas alegres";
	char array2[] = "Chos frescos";

	ft_memcpy(array2, array2 + 6, 5 * sizeof(char));
	printf("%s\n", ft_memcpy(array1, array2 + 6, 6 * sizeof(char)));
	return(0);
}
