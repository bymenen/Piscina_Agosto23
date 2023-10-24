/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 21:28:16 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/22 21:58:39 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_long(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return(i);
}

unsigned int	*ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	longi;

	i = 0;
	j = 0;
	while ((dest[i] != '\0') && (nb != 0))
	{
		i++;
	}
	longi = ft_long(src);
	while ((src[j] != '\0') && (j < nb - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + longi);
}

int	main(void)
{
	char	cad1[10] = "como estas";
	char	cad2[24] = "Hola, que tal ";
	unsigned int	size;

	size = 8;
	//cad = ft_strncat(cad2, cad1, size);
	printf("%s\n", strncat(cad2, cad1, size));
	//printf("%s\n", ft_strlcat(cad2, cad1, size));
	return (0);
}
