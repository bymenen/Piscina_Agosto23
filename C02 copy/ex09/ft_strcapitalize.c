/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:43:55 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/21 12:04:08 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
		{
			str[i] = str[i] + 32;
		}
		if ((i == 0) && (str[i] >= 97) && (str[i] <= 122))
		{
			str[i] = str[i] - 32;
		}
		if ((str[i - 1] == 32) && (str[i] >= 97) && (str[i] <= 122))
		{
			str[i] = str[i] - 32;
		}
		if ((str[i -1] == 45) && (str[i] >= 97 && str[i] <= 122))
			str[i] = str[i] - 32;
		if ((str[i -1] == 43) && (str[i] >= 97 && str[i] <= 122))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "hola ; Qusadf+sd-dest54as 67A";
	char	*destino;

	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}
