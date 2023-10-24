/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:26:40 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/29 13:27:30 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <math.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		i = 2;
		while (i < nb)
		{
			if (i * i == nb)
				return (i);
			else if (i * i < nb)
				i++;
			else
				return (0);
		}
		return (0);
	}
}
/*
int	main(void)
{
	int	numb;
	int	res;

	numb = 36;
	res = ft_sqrt(numb);
	printf("%d \n", res);
	printf("%f", sqrt(numb));
	return (0);
}
// si son numeros negativos 0
// aunque podriamos hacer el valor absoluto
*/
