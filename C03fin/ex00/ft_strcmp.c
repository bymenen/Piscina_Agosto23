/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:39:27 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/30 11:28:55 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (((s1[i] != '\0') || (s2[i] != '\0'))
		&& (s1[i] == s2[i]))
	{
		i++;
	}
	x = s1[i] - s2[i];
	return (x);
}

int	main(void)
{
	char	cad1[] = "holb";
	char	cad2[] = "hola";
	int		resul;

	resul = ft_strcmp(cad1, cad2);
	printf("Compara cad1 y cad2: %d\n", strcmp(cad1, cad2));
	printf("Compara cad1 y cad1: %d\n", strcmp(cad1, cad1));
	if ((resul <= -1) || (resul >= 1))
		printf("\nLas cadenas son distintas %d \n", resul);
	else
		printf("\nLas cadenas son iguales %d\n", resul);
	return (0);
}
