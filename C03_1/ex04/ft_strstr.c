/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:45:09 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/24 15:15:05 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	lenght;
	int	cont;
	int	i;
	int	j;

	lenght = 0;
	i = 0;
	j = 0;
	while (to_find[lenght] != '\0')
		lenght++;
	if (lenght == 0)
		return (str);
	while (str[i] != 0)
	{
		cont = 0;
		while ((to_find[j] == str[i + j]) && (to_find[j] != '\0'))
		{
			cont++;
			if (cont == lenght)
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	cad1[] = "La frase que busco es";
	char	cad2[] = "aaa";
	char	*res;
	char	cad3[] = "La frase que busco es";
	char	cad4[] = "aaa";

	res = ft_strstr(cad1, cad2);
	printf("%s\n", res);
	res = strstr(cad3, cad4);
	printf("%s\n", res);
	return (0);
}
// tenia fallos porque si es cad2 es nulo
// tiene que devolver el vector fuente
*/
