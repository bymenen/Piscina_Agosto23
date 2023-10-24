/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:41:34 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/17 14:23:55 by vmenende         ###   ########.fr       */
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

int	main(void)
{
	int	tab[6] = {6, 7, 1, 2, 4, 5};
	int	size;
	int	i;

	// tab[7] = {0, 1, 2, 3, 4, 5};
	size = 6;
	i = 0;
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}
