/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <vmenende@student.42madrid.com>   +#+  +:+       +#+        */
/*       lsalah-d <lsalah-d@student.42madrid.com> +#+#+#+#+#+   +#+           */
/*       axcastil <axcastil@student.42madrid.com>		#+#    #+#			  */
/*   Created: 2023/08/12 11:57:35 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/12 12:26:31 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	write_letter(int x, int y, int x_aux, int y_aux)
{
	if (y_aux == y && (x_aux == x || x == 1))
		ft_putchar('A');
	else if (y == 1 && (x_aux == x || x == 1))
		ft_putchar('C');
	else if ((y_aux == y || y == 1) && x_aux != x && x != 1)
		ft_putchar('B');
	else if (x_aux == x || x == 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	x_aux;
	int	y_aux;

	x_aux = x;
	y_aux = y;
	while (y > 0)
	{
		x = x_aux;
		while (x > 0)
		{
			write_letter(x, y, x_aux, y_aux);
			x--;
		}
		ft_putchar('\n');
		y--;
	}
}
