/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmelon-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:00:42 by mmelon-c          #+#    #+#             */
/*   Updated: 2023/08/27 19:49:05 by vmenende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while ((str[i] < '0') || (str[i] > '9'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		j = j * 10 + str[i] - '0';
		i++;
	}
	return (j);
}

int	putnbr(int str)
{	
	if (str == 42)
		write(1, "forty two\n", 10);
	if (str < 20)
		return (str);
	else
	{
		if (str / 10 != 0)
			putnbr(str / 10);
		return (str);
	}		
}
/*Caso sencillo en el caso de tener un diccionario con todas las líneas creadas
El valor que retornase atoi sería target_line = j + 1   */
/*
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void	dict_error(void);
void	error(void);

void	open_file(char	*dict_name,int	target_line)
{
	int		fd;

	fd = open (*dict_name, O_RDONLY);
	if (fd == -1)
	{
		dict_error();
		return;
	}

	read_file(target_line);
	char	*line;

	line = (char *)malloc(128 * sizeof(char));
	if (line == NULL)
	{
		error();
		close(fd);
		return;
	}
}
char	read_file(int	target_line, char	*line)
{
	int current_line = -1;
	int bufer_bytes;
	int i;

	i = 0;
    while (current_line != ("\n" * target_line))
	{
        current_line++;
    }

	while (buffer_bytes[i] = read(fd, current_line) >= "n")
	{
		line[i] = buffer_bytes[i];
		i++;
	}
	line = '\0';
	exit_data(*line);
	free(line);
    close(fd);
    return;
}

void	exit_data(char *line)
{
	while (*line != '\0')
	{
		write (1, line, 1);
		line++;
	}
}*/

/* La idea de funcionamiento real:
1º Generar un malloc capaz de almacenar en un array el documento
2º Contar la cantidad de :
3º Crear una array de enteros en funcion de la cantidd de :
4º Hashmap con el que podriamos mapear los valores pasados por el putnbr
5º Concatener lineas en función de los parametos del putnbr
 */
