/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:39:05 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/15 20:17:52 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temporal;

	temporal = *a / *b;
	*b = *a % *b;
	*a = temporal;
}

/* int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 5;
	printf("Division: a =  %d / b = %d \n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("La division es %d\n", a);
	printf("El resto es %d", b);
	return (0);
}*/
