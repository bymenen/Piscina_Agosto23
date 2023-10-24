/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 21:28:16 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/25 12:26:50 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_long(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	longdest;
	unsigned int	longsrc;

	i = 0;
	j = ft_long(dest);
	longdest = j;
	longsrc = ft_long(src);
	if ((size  == 0) || (size <= longdest))
			return  (longsrc + size);
	while ((src[i] != '\0') && (i < size - longdest -1))
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return ((longdest + longsrc));
}

int	main(void)
{
	char	cad1[] = "como estas";
	char	cad2[50] = "Hola,";
	unsigned int	size;
	char	cad3[] = "como estas";
	char	cad4[50] = "Hola, que tal ";
	size_t	resul;

	size = 15;
	resul = ft_strlcat(cad2, cad1, size);
	printf("%zu\n", resul);
	printf("%zu\n", strlcat(cad4, cad3, size));
	printf("%s", cad2);
	return (0);
}
// problemas con el return
// resueltos o eso creo
