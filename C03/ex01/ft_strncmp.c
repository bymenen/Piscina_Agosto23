/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:58:49 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/25 12:11:09 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	if (n == 0)
		return (0);
	while ((((s1[i] != '\0') || (s2[i] != '\0'))
			&& (i < n - 1)) && (s1[i] == s2[i]))
	{
		i++;
	}
	x = s1[i] - s2[i];
	return (x);
}

int	main(void)
{
	char	cad1[] = "Holaaaadlñskfj";
	char	cad2[] = "Hola";
	unsigned int		size;
	int				resul;

	size = 0;
	resul = ft_strncmp(cad1, cad2, size);
	printf("Compara cad1 y cad2: %d\n", strncmp(cad1, cad2, size));
	//printf("Compara cad1 y cad1: %d\n", strncmp(cad1, cad1, size));
	if ((resul <= -1) || (resul >= 1))
		printf("\nLas cadenas son distintas %d \n", resul);
	else
		printf("\nLas cadenas son iguales %d\n", resul);
	return (0);
}
// tuve que añadir una funcion para controlar la entrada al 
// igual que en el ejercicio anterior

