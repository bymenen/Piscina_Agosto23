/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:34:17 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/19 19:38:35 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 48) || (str[i] > 57))
		{
			n = 0;
		}
		i++;
	}
	return (n);
}

int	main(void)
{
	char	str[] = "89744";
	int	cont;

	cont = ft_str_is_numeric(str);
	printf("%d", cont);
	return (0);
}