/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmenende <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 09:06:27 by vmenende          #+#    #+#             */
/*   Updated: 2023/08/27 09:44:57 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	signo;
	int	res;

	i = 0;
	signo = 1;
	res = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signo = signo * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - 48) + (res * 10);
		i++;
	}
	return (res * signo);
}
/*
int	main(void)
{
	char	str[] = "   --+-+9559";
	int		resultado;

	resultado = ft_atoi(str);
	printf("%d", resultado);
	return (0);
}
// primer bucle para quitar toda la basura
// segundo bucle para el signo
// tercer bucle para guardar el numero
*/
