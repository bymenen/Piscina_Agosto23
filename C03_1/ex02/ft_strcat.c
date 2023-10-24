/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:19:46 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/24 13:40:05 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
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
	char	cad1[] = "Holaaa";
	char	cad2[] = "";
	char	*cad;

	cad = ft_strcat(cad2, cad1);
	printf("%s\n", cad);
	//printf("%s\n", strcat(cad2, cad1));
	return (0);	
}
// me dio mal porque habia declarado un puntero en la funcion
// no lo estaba apuntando bien
// */
