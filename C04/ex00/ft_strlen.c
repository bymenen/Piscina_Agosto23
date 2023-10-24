/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:47:01 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/27 09:37:18 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char str[] = "Mide esta cadena";
	int	lenght;

	lenght = ft_strlen(str);
	printf("La cadena mide %d \n", lenght);
	printf("Funcion strleng %lu\n", strlen(str));
	return (0);
}*/
