/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:45:09 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/22 21:25:34 by vmenende         ###   ########.fr       */
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
	{
		lenght++;
	}
	while (str[i] != 0)
	{
		while ((to_find[j] == str[i + j]) && (to_find[j] != '\0'))
		{
			cont++;
			if (cont == lenght)
				return (&str[i]);
			j++;
		}
		cont = 0;
		i++;
	}
	return (0);
}

int	main(void)
{
	char	cad1[] = "La frase que busco es";
	char	cad2[] = "que ";
	char	*res;
	char	cad3[] = "La frase que busco es";
	char	cad4[] = "que ";

	res = ft_strstr(cad1, cad2);
	printf("%s\n", res);
	res = strstr(cad3, cad4);
	printf("%s\n", res);
	return (0);
}
