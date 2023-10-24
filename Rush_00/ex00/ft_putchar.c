/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <vmenende@student.42madrid.com>   +#+  +:+       +#+        */
/*       lsalah-d <lsalah-d@student.42madrid.com> +#+#+#+#+#+   +#+           */
/*   	 axcastil <axcastil@student.42madrid.com>		#+#	   #+#			  */
/*   Created: 2023/08/12 12:28:19 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/12 12:29:09 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
