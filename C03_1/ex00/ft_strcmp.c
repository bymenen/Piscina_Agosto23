/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:39:27 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/24 12:48:09 by vmenende         ###   ########.fr       */
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
			x = 1;
			return (x);
		}
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	x;

	i = 0;
	x = str_null(s1, s2);
	if (x != 0)
		return (x);
	while ((s1[i] != '\0') || (s2[i] != '\0'))
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
	char	cad1[] = "qwerty  ";
	char	cad2[] = "qwerzty  ";
	int		resul;

	resul = ft_strcmp(cad1, cad2);
	printf("Compara cad1 y cad2: %d\n", strcmp(cad1, cad2));
	printf("Compara cad2 y cad1: %d\n", strcmp(cad2, cad1));
	printf("Compara cad1 y cad1: %d\n", strcmp(cad1, cad1));
	if ((resul <= -1) || (resul >= 1))
		printf("\nLas cadenas son distintas %d \n", resul);
	else
		printf("\nLas cadenas son iguales %d\n", resul);
	return (0);
}
// tube que añadir una funcion para controlar la entrada nula*/
