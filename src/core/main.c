/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 03:36:46 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/12/17 06:05:39 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	set_img(t_vars *vars)
{
	int	img_width;
	int	img_height;

	vars->graphics.bg_img = mlx_xpm_file_to_image(vars->graphics.mlx,
			"textures/bg.xpm", &img_width, &img_height);
	vars->graphics.player_img = mlx_xpm_file_to_image(vars->graphics.mlx,
			"textures/player.xpm", &img_width, &img_height);
	vars->graphics.exit_img = mlx_xpm_file_to_image(vars->graphics.mlx,
			"textures/exit.xpm", &img_width, &img_height);
	vars->graphics.item_img = mlx_xpm_file_to_image(vars->graphics.mlx,
			"textures/item.xpm", &img_width, &img_height);
	vars->graphics.wall_img = mlx_xpm_file_to_image(vars->graphics.mlx,
			"textures/wall.xpm", &img_width, &img_height);
}

static int	check_args_and_init_vars(char **av, t_vars *vars)
{
	vars->path = av[1];
	vars->state.collectible_count = 0;
	vars->state.move_count = 0;
	vars->state.initial_position_set = 0;
	return (0);
}

static void	init_mlx_and_window(t_vars *vars)
{
	int	win_width;
	int	win_height;

	vars->graphics.mlx = mlx_init();
	if (!vars->graphics.mlx)
	{
		perror("Error initializing MLX\n");
		exit(EXIT_FAILURE);
	}
	get_map_info(vars);
	vars->state.tile_size = 50;
	win_width = vars->map_info.width * vars->state.tile_size;
	win_height = vars->map_info.height * vars->state.tile_size;
	vars->graphics.win = mlx_new_window(vars->graphics.mlx, win_width,
			win_height, "Mini Game");
	if (!vars->graphics.win)
	{
		perror("Error creating window\n");
		exit(EXIT_FAILURE);
	}
}

static void	setup_and_run_game(t_vars *vars)
{
	set_img(vars);
	read_and_display_map(vars);
	mlx_hook(vars->graphics.win, 2, 1L << 0, move_player, vars);
	mlx_hook(vars->graphics.win, 17, 0, close_window, vars);
	mlx_loop(vars->graphics.mlx);
}

int	main(int ac, char **av)
{
	t_vars	vars;

	if (!has_valid_extension(av[1]))
	{
		ft_printf("Error: Invalid file extension.\n");
		return (0);
	}
	if (ac != 2)
	{
		ft_printf("Error - Usage: ./so_long <map_file>\n");
		return (0);
	}
	check_args_and_init_vars(av, &vars);
	if (map_check(&vars) == 1)
	{
		return (0);
	}
	init_mlx_and_window(&vars);
	setup_and_run_game(&vars);
	return (0);
}
