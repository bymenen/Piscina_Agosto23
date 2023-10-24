/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:39:59 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/23 11:36:08 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((src[j] != '\0') && (j < nb))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	cad1[10] = "como estas";
	char	cad2[24] = "Hola, que tal ";
	unsigned int	size;

	size = 8;
	//cad = ft_strncat(cad2, cad1, size);
	//printf("%s\n", strncat(cad2, cad1, size));
	printf("%s\n", ft_strncat(cad2, cad1, size));
	return (0);
}*/
