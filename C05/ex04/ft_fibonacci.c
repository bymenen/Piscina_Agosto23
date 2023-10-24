/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:29:05 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/29 10:36:24 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
	{
		return (index);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int	main(void)
{
	int	index;
	int	res;

	index = 10;
	res = ft_fibonacci(index);
	printf("%d", res);
	return (0);
}*/
//	if (index < 2)
//		return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
//	return (index);
// podria hacerse con index i < 2 
// intercambiando las lineas 
// sale igual
//
// vale no puede ser porque para index 2
// cambiar el simbolo tiene que ser >
// escribe 1
