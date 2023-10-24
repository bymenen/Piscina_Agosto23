/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 11:24:18 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/14 14:44:37 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	possitive;
	char	negative;

	possitive = 'P';
	negative = 'N';
	if (n >= 0)
	{
		write(1, &possitive, 1);
	}
	else
	{
		write(1, &negative, 1);
	}
}
