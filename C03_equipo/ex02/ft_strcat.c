/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:19:46 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/22 17:31:58 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;
	char	*cad3;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		cad3[i] = dest[i];
		i++;
	}
	while (src[j] != '\0')
	{
		cad3[i + j] = src[j];
		j++;
	}
	cad3[i + j] = '\0';
	return (cad3);
}

int	main(void)
{
	char	cad1[] = "Holaaa";
	char	cad2[] = "Hola";
	char	*cad;

	cad = ft_strcat(cad2, cad1);
	printf("%s\n", cad);
	//printf("%s\n", strcat(cad2, cad1));
	return (0);	
}
