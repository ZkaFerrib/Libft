/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafernan <gafernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 14:17:02 by gafernan          #+#    #+#             */
/*   Updated: 2022/06/01 15:00:36 by gafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

/* Lo que hacemos es poner todas las condiciones que entren dentro de nuestra limitaciones, es decir,
en la primera parte lo que estamos haciendo es delimitar que en el caso de que nuestro dstsize sea igual a 0
nos devuelva si o si la longitud de nuestro source. Y asi con todas las condiciones, si fuera mas corto que
la actual longitud de nuestro dest etc. */

int	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	destlen;
	size_t	srclen;
	size_t	a;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	a = 0;
	if (dstsize == 0)
		return (srclen);
	if (dstsize < destlen)
		return (destlen + srclen);
	else
	{
		while (src[a] && (destlen + 1) < dstsize)
		{
			dest[destlen + a] = src [a];
			a++;
		}
		if ((destlen + a) == dstsize && destlen < dstsize)
			dest[destlen + a - 1] = '\0';
		else
			dest[destlen + a] = '\0';
	}
	return (destlen + srclen);
}

/* int	main()
{
	char *str = "Habla chucho";
	char *str2 = "que no te escucho";
	int	i;

	i = 0;
	printf("%d", ft_strlcat(str, str2, i));
} */