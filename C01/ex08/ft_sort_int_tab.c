/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:41:34 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/17 14:25:50 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	*first;
	int	*next;
	int	temporal;

	first = tab;
	while (size > 0)
	{
		next = first +1;
		if (*first > *next)
		{
			temporal = *first;
			*first = *next;
			*next = temporal;
			if (first != tab)
			{
				first--;
				size++;
			}
		}
		else
		{
			first++;
			size--;
		}
	}
}
