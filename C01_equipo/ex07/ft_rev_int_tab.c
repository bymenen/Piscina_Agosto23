/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:39:20 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/17 12:52:50 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temporal;
	int	*end;

	end = tab + size -1;
	while (tab < end)
	{
		temporal = *tab;
		*tab = *end;
		*end = temporal;
		tab++;
		end--;
	}
}

int	main(void)
{
	int	tab[6] = {0, 1, 2, 3, 4, 5};
	int	size;
	int	i;
	
	// tab[7] = {0, 1, 2, 3, 4, 5};
	size = 6;
	i = 0;
	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}
