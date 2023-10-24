/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:40:31 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/20 19:55:18 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 97) || (str[i] > 122))
		{
			n = 0;
		}
		i++;
	}
	return (n);
}

int	main(void)
{
	char	str[] = "aaazzfgag ragfagzz";
	int	cont;

	cont = ft_str_is_lowercase(str);
	printf("%d", cont);
	return (0);
}