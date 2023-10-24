/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:58:49 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/24 13:35:28 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	str_null(char *s1, char *s2)
{
	int	x;

	x = 0;
	if ((s1[0] == '\0') || (s2[0] == '\0'))
	{
		if (s1[x] < s2[x])
		{
			x = s1[0] - s2[0];
			return (x);
		}
		else
		{
			x = s1[0] - s2[0];
			return (x);
		}
	}
	return (x);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = str_null(s1, s2);
	if (x != 0)
		return (x);
	while (((s1[i] != '\0') || (s2[i] != '\0')) && (i < n))
	{
		if (s1[i] != s2[i])
		{
			x++;
			if (s1[i] < s2[i])
			{
				x = s1[i] - s2[i];
			}
			else
			{
				x = s1[i] - s2[i];
			}
			return (x);
		}
		i++;
	}
	return (x);
}
/*
int	main(void)
{
	char	cad1[] = "Hola como estas";
	char	cad2[] = "Hola como";
	unsigned int		size;
	int				resul;

	size = 10;
	resul = ft_strncmp(cad1, cad2, size);
	printf("Compara cad1 y cad2: %d\n", strncmp(cad1, cad2, size));
	printf("Compara cad2 y cad1: %d\n", strncmp(cad2, cad1, size));
	printf("Compara cad1 y cad1: %d\n", strncmp(cad1, cad1, size));
	if ((resul <= -1) || (resul >= 1))
		printf("\nLas cadenas son distintas %d \n", resul);
	else
		printf("\nLas cadenas son iguales %d\n", resul);
	return (0);
}
// tuve que añadir una funcion para controlar la entrada al 
// igual que en el ejercicio anterior
*/
