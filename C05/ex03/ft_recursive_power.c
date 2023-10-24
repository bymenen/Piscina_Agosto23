/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:18:39 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/29 10:30:37 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power >= 1)
		return (nb * ft_recursive_power((nb), power -1));
	return (nb);
}
/*
int	main(void)
{
	int	nb;
	int	power;
	int	res;

	nb = -10;
	power = 5;
	res = ft_recursive_power(nb, power);
	printf("%d", res);
	return (0);
}*/
