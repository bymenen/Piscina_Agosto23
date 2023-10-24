/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:14:33 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/29 13:49:51 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		res = i * res;
		i++;
	}
	return (res);
}
/*
int	main(void)
{
	int	nbr;
	int	resul;

	nbr = -75;
	resul = ft_iterative_factorial(nbr);
	printf("%d", resul);
	return (0);
}*/
