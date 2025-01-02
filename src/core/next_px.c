/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_px.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:50:51 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/12/16 04:46:36 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	open_map_file(const char *path)
{
	int	fd;

	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening map file");
		exit(EXIT_FAILURE);
	}
	return (fd);
}

int	close_window(t_vars *vars)
{
	mlx_destroy_window(vars->graphics.mlx, vars->graphics.win);
	exit(0);
	return (0);
}

int	calculate_tile_coordinate(int position, int tile_size)
{
	return (position / tile_size);
}

char	find_tile_in_map(int tile_x, int tile_y, int fd)
{
	char	buffer;
	int		current_x;
	int		current_y;

	current_x = 0;
	current_y = 0;
	while (read(fd, &buffer, 1) == 1)
	{
		if (buffer == '\n')
		{
			current_y++;
			current_x = 0;
		}
		else
		{
			if (current_x == tile_x && current_y == tile_y)
				return (buffer);
			current_x++;
		}
	}
	return ('\0');
}

char	next_px(int next_x, int next_y, t_vars *vars)
{
	int		tile_x;
	int		tile_y;
	int		fd;
	char	tile;

	tile_x = calculate_tile_coordinate(next_x, vars->state.tile_size);
	tile_y = calculate_tile_coordinate(next_y, vars->state.tile_size);
	fd = open_map_file(vars->path);
	tile = find_tile_in_map(tile_x, tile_y, fd);
	close(fd);
	return (tile);
}
