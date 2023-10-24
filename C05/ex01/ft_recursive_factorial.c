/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:39:28 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/29 10:21:40 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if ((nb == 0) || (nb == 1))
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	return (ft_recursive_factorial(nb - 1) * nb);
}

int	main(void)
{
	int	nbr;
	int	res;

	nbr = 10;
	res = ft_recursive_factorial(nbr);
	printf("%d", res);
	return (0);
}
