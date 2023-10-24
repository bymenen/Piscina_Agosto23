/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:55:34 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/30 16:13:07 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (((s1[i] != '\0') || (s2[i] != '\0'))
		&& (s1[i] == s2[i]))
	{
		i++;
	}
	x = s1[i] - s2[i];
	return (x);
}

void	ft_swap(char **i, char **j)
{
	char	*temporal;

	temporal = *i;
	*i = *j;
	*j = temporal;
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*temporal;

	i = 1;
	temporal = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap(&argv[i], &argv[j]);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
