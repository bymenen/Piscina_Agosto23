/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:14:52 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/15 18:31:21 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temporal;

	temporal = *a;
	*a = *b;
	*b = temporal;
}

/*
int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 24;
	printf("Este es el valor de a = %d\n", a);
	printf("Este es el valor de b = %d\n", b);
	ft_swap(&a, &b);
	printf("Intercambio: \na %d \nb %d", a, b);
	return (0);
}*/
