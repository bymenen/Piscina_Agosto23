/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 21:10:30 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/21 12:17:52 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	lenght;
	unsigned int	i;

	i = 0;
	lenght = 0;
	while (src[lenght] != '\0')
		lenght++;
	if (size != 0)
	{
		while ((src[i] != '\0') && (i < size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (lenght);
}

int	main(void)
{
	char	str[] = " hola Que Tal estas";
	char	destino[] = "adios";
	unsigned int numb=20;
	size_t num = 20;

	numb = ft_strlcpy(destino, str, numb);
	printf("%u %s \n", numb, destino);
	//printf("%lu %s \n", strlcpy(destino, str, num), destino);
	return (0);
}
