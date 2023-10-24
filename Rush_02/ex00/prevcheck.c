/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prevcheck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosperom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:37:30 by rosperom          #+#    #+#             */
/*   Updated: 2023/08/26 20:06:06 by mmelon-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	atoi(char *str);

void	error(void)
{
	write (1, "Error\n", 6);
}

void	dict_error(void)
{
	write (1, "Dict Error\n", 11);
}

int	gocheck(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9') || str[i] == 32)
			i++;
		else
			return (0);
	}
	return (1);
}
