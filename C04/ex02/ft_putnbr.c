/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:45:02 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/27 11:43:49 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		//put_char('-');
		//put_char('2');
		write(1, "-2147483648", 11);
		//ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		put_char('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		put_char(nb + 48);
}
/*
int	main(void)
{
	int	num;

	num = -2147483648;
	ft_putnbr(num);
	//write(1, &num, 1);
	printf("\n%d\n", num);
	return (0);
}
// escribir un numero largo
// solo utilizand la funcion write
//
// hacer recursividad 
//
// hay que controlar el primer numero porque su numero positivo no existe 
// en los int, es uno menos
*/
