/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:55:35 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/20 20:01:50 by vmenende         ###   ########.fr       */
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
		if ((str[i] < 32) || (str[i] > 126))
		{
			n = 0;
		}
		i++;
	}
	return (n);
}

int	main(void)
{
	char	str[] = "HOOLñ     ~";
	int	cont;

	cont = ft_str_is_alpha(str);
	printf("%d", cont);
	return (0);
}
