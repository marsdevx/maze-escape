/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_and_display_map.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:21:05 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/12/16 04:15:49 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	init_start_pos(t_vars *vars)
{
	vars->state.start_pos_x = vars->state.current_x;
	vars->state.start_pos_y = vars->state.current_y;
}

void	put_img(void *img, int x, int y, t_vars *vars)
{
	mlx_put_image_to_window(vars->graphics.mlx, vars->graphics.win, img, x
		* vars->state.tile_size, y * vars->state.tile_size);
}

void	put_img_by_type(char type, int x, int y, t_vars *vars)
{
	if (type == '0')
		put_img(vars->graphics.bg_img, x, y, vars);
	else if (type == '1')
		put_img(vars->graphics.wall_img, x, y, vars);
	else if (type == 'C')
		put_img(vars->graphics.item_img, x, y, vars);
	else if (type == 'E')
		put_img(vars->graphics.exit_img, x, y, vars);
	else if (type == 'P')
	{
		if (!vars->state.initial_position_set)
		{
			vars->state.current_x = x * vars->state.tile_size;
			vars->state.current_y = y * vars->state.tile_size;
			vars->state.initial_position_set = 1;
			init_start_pos(vars);
		}
		put_img(vars->graphics.player_img, x, y, vars);
	}
}

void	read_and_display_map(t_vars *vars)
{
	int		fd;
	char	buffer;
	int		x;
	int		y;

	x = 0;
	y = 0;
	fd = open_map_file(vars->path);
	while (read(fd, &buffer, 1) > 0)
	{
		if (buffer == '\n')
		{
			y++;
			x = 0;
		}
		else
		{
			put_img_by_type(buffer, x, y, vars);
			x++;
		}
	}
	close(fd);
}
