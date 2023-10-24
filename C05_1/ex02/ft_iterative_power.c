/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:49:17 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/29 13:49:27 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power >= 1)
	{
		while (power > 1)
		{
			res = res * nb;
			power--;
		}
	}
	return (res);
}
/*
int	main(void)
{
	int	nb;
	int	power;
	int	res;

	nb = 2;
	power = 4;
	res = ft_iterative_power(nb, power);
	printf("%d", res);
	return (0);
}*/
