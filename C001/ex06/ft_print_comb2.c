/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 11:24:18 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/14 18:29:41 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_write_num( int num1, int num2)
{
	ft_putchar(48 + num1 / 10);
	ft_putchar(48 + num1 % 10);
	ft_putchar(32);
	ft_putchar(48 + num2 / 10);
	ft_putchar(48 + num2 % 10);
	if ((num1) != 98 || (num2) != 99)
	{
		ft_putchar(44);
		ft_putchar(32);
	}
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 0;
	while (num1 <= 99)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_write_num(num1, num2),
			num2++;
		}
		num1++;
	}
}
