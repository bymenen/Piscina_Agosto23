/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:25:49 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/21 13:57:30 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while (str[i] != '\0')
	{
		if (((str[i] < 65) || (str[i] > 90)) && (
				(str[i] < 97) || (str[i] > 122)))
		{
			n = 0;
		}
		i++;
	}
	return (n);
}

int	main(void)
{
	char	str[] = "HOOpahdfjazaaAZ";
	int	cont;

	cont = ft_str_is_alpha(str);
	printf("%d", cont);
	return (0);
}
