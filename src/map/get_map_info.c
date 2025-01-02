/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map_info.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:21:05 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/12/17 02:22:52 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	update_map_info(char c, t_vars *vars, int *is_first_line)
{
	if (c == '\n')
	{
		vars->map_info.height++;
		*is_first_line = 0;
	}
	else
	{
		if (*is_first_line)
			vars->map_info.width++;
		if (c == 'C')
			vars->map_info.all_collectible++;
		else if (c == 'E')
			vars->map_info.all_exits++;
		else if (c == 'P')
			vars->map_info.all_players++;
	}
}

void	initialize_map_info(t_vars *vars, int *is_first_line)
{
	vars->map_info.width = 0;
	vars->map_info.height = 0;
	vars->map_info.all_collectible = 0;
	vars->map_info.all_exits = 0;
	vars->map_info.all_players = 0;
	*is_first_line = 1;
}

void	read_map_data(int fd, t_vars *vars, int *is_first_line)
{
	ssize_t	bytes_read;
	ssize_t	i;
	char	buffer[1024];

	bytes_read = read(fd, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		i = 0;
		while (i < bytes_read)
		{
			update_map_info(buffer[i], vars, is_first_line);
			i++;
		}
		bytes_read = read(fd, buffer, sizeof(buffer));
	}
}

void	get_map_info(t_vars *vars)
{
	int	fd;
	int	is_first_line;

	fd = open_map_file(vars->path);
	initialize_map_info(vars, &is_first_line);
	read_map_data(fd, vars, &is_first_line);
	vars->map_info.height += 1;
	close(fd);
}
