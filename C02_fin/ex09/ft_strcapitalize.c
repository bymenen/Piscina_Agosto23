/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:43:55 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/31 17:17:01 by vmenende         ###   ########.fr       */
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
		if ((str[0] >= 97) && (str[0] <= 122))
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
	char	str[] = "swc2iohmai19@y";

	printf("%s", str);
	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}
