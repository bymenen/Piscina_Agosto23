/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 11:24:18 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/31 13:07:10 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putint(int nbr1, int nbr2, int nbr3)
{
	if ((nbr1 != nbr3) && (nbr2 != nbr3) && (nbr1 != nbr2))
	{
		write (1, &nbr1, 1);
		write (1, &nbr2, 1);
		write (1, &nbr3, 1);
		if ((nbr1 != '7') || (nbr2 != '8') || (nbr3 != '9'))
		{
			write (1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = '0';
	num2 = '0';
	num3 = '0';
	while (num1 <= '7')
	{
		while (num2 <= '8')
		{
			while (num3 <= '9')
			{
				ft_putint(num1, num2, num3);
				num3++;
			}
			num3 = num2 + 1;
		num2++;
		}
	num2 = num1 + 1;
	num1++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
