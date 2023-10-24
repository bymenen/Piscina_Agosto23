/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:07:43 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/31 12:52:48 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
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

int	ft_recur_pow(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power >= 1)
		return (nb * ft_recur_pow((nb), power -1));
	return (nb);
}

void	ft_print_combn(int n)
{
	int	i;
	int	j;
	int	count;

	i = 1;
	while (i < ft_recur_pow(10, n))
	{
		if (i <= 9)
			put_char(48);
		if ((i % 10) == 0)
		{
			count++;
			i = count + i;
		}
		else
		{
			ft_putnbr(i);
			if ((i != (ft_recur_pow(10, n) - 11))
				&& (i != (ft_recur_pow(10, n) - 1)))
				write(1, ", ", 2);
		}
		i++;
		if (count == 9)
			count = 0;
	}
}

int	main(void)
{
	int	cifras;

	cifras = 2;
	ft_print_combn(cifras);
	return (0);
}
