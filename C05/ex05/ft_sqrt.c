/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:26:40 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/29 12:33:39 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>

int	ft_sqrt(int nb)
{
	int	promedio;
	int	cociente;
	int	estimacion;

	// estimacion = 1;
	if (nb < 0)
		return (0);
	else
		while (((estimacion * estimacion) - nb) >= 1)
		{
			cociente = (nb / estimacion);
			promedio = (cociente + estimacion) / 2;
			estimacion = promedio;
		}
	return (estimacion);
}

int	main(void)
{
	int numb;
	int	res;

	numb = 26;
	res = ft_sqrt(numb);
	printf("%d \n", res); 
	printf("%f", sqrt(numb));
	return (0);
}
// si son numeros negativos 0
// aunque podriamos hacer el valor absoluto
