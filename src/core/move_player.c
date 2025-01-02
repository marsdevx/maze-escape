/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 23:21:05 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/12/17 06:32:21 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	update_position(int key, int *next_x, int *next_y, t_vars *vars)
{
	if (key == KEY_W)
		*next_y -= vars->state.tile_size;
	else if (key == KEY_A)
		*next_x -= vars->state.tile_size;
	else if (key == KEY_S)
		*next_y += vars->state.tile_size;
	else if (key == KEY_D)
		*next_x += vars->state.tile_size;
	else if (key == KEY_ESC)
		close_window(vars);
	else
	{
	}
}

int	check_collectible(int next_x, int next_y, char tile, t_vars *vars)
{
	int	already_saved;
	int	i;

	already_saved = 0;
	i = 0;
	while (i < vars->state.collectible_count)
	{
		if (vars->state.collectible_x[i] == next_x
			&& vars->state.collectible_y[i] == next_y)
		{
			already_saved = 1;
			break ;
		}
		i++;
	}
	if (!already_saved && vars->state.collectible_count < MAX_COLLECTIBLES)
	{
		vars->state.collectible_x[vars->state.collectible_count] = next_x;
		vars->state.collectible_y[vars->state.collectible_count] = next_y;
		vars->state.collectible_count++;
	}
	return (tile == 'C');
}

int	handle_tile_action(char tile, int next_x, int next_y, t_vars *vars)
{
	if (tile == '1')
		return (0);
	else if (tile == 'C')
		check_collectible(next_x, next_y, tile, vars);
	else if (tile == 'E')
	{
		if (vars->map_info.all_collectible == vars->state.collectible_count)
			close_window(vars);
		else
			return (0);
	}
	return (1);
}

void	refresh_display(t_vars *vars)
{
	int	i;

	i = 0;
	mlx_clear_window(vars->graphics.mlx, vars->graphics.win);
	read_and_display_map(vars);
	while (i < vars->state.collectible_count)
	{
		mlx_put_image_to_window(vars->graphics.mlx, vars->graphics.win,
			vars->graphics.bg_img, vars->state.collectible_x[i],
			vars->state.collectible_y[i]);
		i++;
	}
	mlx_put_image_to_window(vars->graphics.mlx, vars->graphics.win,
		vars->graphics.bg_img, vars->state.start_pos_x,
		vars->state.start_pos_y);
	mlx_put_image_to_window(vars->graphics.mlx, vars->graphics.win,
		vars->graphics.player_img, vars->state.current_x,
		vars->state.current_y);
}

int	move_player(int key, t_vars *vars)
{
	int		next_x;
	int		next_y;
	char	tile;

	next_x = vars->state.current_x;
	next_y = vars->state.current_y;
	update_position(key, &next_x, &next_y, vars);
	if (key == KEY_ESC)
		return (0);
	tile = next_px(next_x, next_y, vars);
	if (!handle_tile_action(tile, next_x, next_y, vars))
		return (0);
	vars->state.current_x = next_x;
	vars->state.current_y = next_y;
	vars->state.move_count++;
	ft_printf("Move number: %d\n", vars->state.move_count);
	refresh_display(vars);
	return (0);
}
