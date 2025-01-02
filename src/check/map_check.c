/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:30:23 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/12/17 06:19:14 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	check_and_update_length(int *current_length, int *first_length)
{
	if (*first_length == -1)
		*first_length = *current_length;
	else if (*current_length != *first_length)
		return (0);
	*current_length = 0;
	return (1);
}

int	read_and_check_line(int *current_length, int *first_length, char c)
{
	if (c == '\n')
		return (check_and_update_length(current_length, first_length));
	(*current_length)++;
	return (1);
}

int	is_rectangular(int fd)
{
	ssize_t	bytes_read;
	char	buffer[1024];
	int		first_length;
	int		current_length;
	ssize_t	i;

	first_length = -1;
	current_length = 0;
	bytes_read = read(fd, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		i = 0;
		while (i < bytes_read)
		{
			if (!read_and_check_line(&current_length, &first_length, buffer[i]))
				return (close(fd), 0);
			i++;
		}
		bytes_read = read(fd, buffer, sizeof(buffer));
	}
	close(fd);
	return (first_length == -1 || current_length == first_length);
}

int	map_check_conditions(t_vars *vars)
{
	if (vars->map_info.all_players != 1)
	{
		ft_printf("Error: map should contain exactly one player.\n");
		return (1);
	}
	if (vars->map_info.all_exits != 1)
	{
		ft_printf("Error: map should contain exactly one exit.\n");
		return (1);
	}
	if (vars->map_info.all_collectible < 1)
	{
		ft_printf("Error: map should contain at least one collectible.\n");
		return (1);
	}
	return (0);
}

int	map_check(t_vars *vars)
{
	int	fd;

	count_map_chars(vars);
	if (map_check_conditions(vars))
		return (1);
	{
		fd = open_map_file(vars->path);
		if (!is_rectangular(fd))
		{
			ft_printf("Error: map is not rectangular.\n");
			return (1);
		}
	}
	{
		fd = open_map_file(vars->path);
		if (!is_enclosed_in_walls(fd))
		{
			ft_printf("Error: map is not enclosed in walls.\n");
			return (1);
		}
	}
	return (0);
}
