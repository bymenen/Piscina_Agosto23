/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosperom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:29:34 by rosperom          #+#    #+#             */
/*   Updated: 2023/08/27 14:57:25 by mmelon-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	error(void);
int		gocheck(char *str);
int		ft_atoi(char *str);
int		putnbr(int str);

int	main(int argc, char *argv[])
{
	char	*str;
	int		result;

	str = argv[1];
	if (argc == 2)
	{
		if (gocheck(str) == 1)
		{
			result = ft_atoi(str);
			putnbr(result);
		}
		else
			error();
	}
	else
		error();
	return (0);
}
/*
int	main(int argc, char *argv[])
{
	char	*str;
	char	*ditc_name;
	int		i;
	
	if (argv[2] == "")
		argv[2] = numbers.dict;
	str = argv[1];
	dict_name = argv[2];
	if (argc == 2 || argc == 3)
	{
		if (gocheck(str) == 1)
			ft_atoi(str, dict_name);
		else
			error();
	}
	else
		error();
	return (0);
}*/
