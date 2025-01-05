/*                                                                                     ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢲⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   */
/*                                                                                     ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   */
/*                                                                                     ⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠄⠂⢉⠤⠐⠋⠈⠡⡈⠉⠐⠠⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   */
/*                                                                                     ⠀⠀⠀⠀⢀⡀⢠⣤⠔⠁⢀⠀⠀⠀⠀⠀⠀⠀⠈⢢⠀⠀⠈⠱⡤⣤⠄⣀⠀⠀⠀⠀⠀   */
/*                                                                                     ⠀⠀⠰⠁⠀⣰⣿⠃⠀⢠⠃⢸⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⠈⢞⣦⡀⠈⡇⠀⠀⠀   */
/*                                                                                     ⠀⠀⠀⢇⣠⡿⠁⠀⢀⡃⠀⣈⠀⠀⠀⠀⢰⡀⠀⠀⠀⠀⢢⠰⠀⠀⢺⣧⢰⠀⠀⠀⠀   */
/*   File:         main.c                                                              ⠀⠀⠀⠈⣿⠁⡘⠀⡌⡇⠀⡿⠸⠀⠀⠀⠈⡕⡄⠀⠐⡀⠈⠀⢃⠀⠀⠾⠇⠀⠀⠀⠀   */
/*                                                                                     ⠀⠀⠀⠀⠇⡇⠃⢠⠀⠶⡀⡇⢃⠡⡀⠀⠀⠡⠈⢂⡀⢁⠀⡁⠸⠀⡆⠘⡀⠀⠀⠀⠀   */
/*   Project:      game-in-c                                                           ⠀⠀⠀⠸⠀⢸⠀⠘⡜⠀⣑⢴⣀⠑⠯⡂⠄⣀⣣⢀⣈⢺⡜⢣⠀⡆⡇⠀⢣⠀⠀⠀⠀   */
/*   Github:       marsdevx                                                            ⠀⠀⠀⠇⠀⢸⠀⡗⣰⡿⡻⠿⡳⡅⠀⠀⠀⠀⠈⡵⠿⠿⡻⣷⡡⡇⡇⠀⢸⣇⠀⠀⠀   */
/*                                                                                     ⠀⠀⢰⠀⠀⡆⡄⣧⡏⠸⢠⢲⢸⠁⠀⠀⠀⠀⠐⢙⢰⠂⢡⠘⣇⡇⠃⠀⠀⢹⡄⠀⠀   */
/*   Created:      01:38   05/01/2025                                                  ⠀⠀⠟⠀⠀⢰⢁⡇⠇⠰⣀⢁⡜⠀⠀⠀⠀⠀⠀⠘⣀⣁⠌⠀⠃⠰⠀⠀⠀⠈⠰⠀⠀   */
/*   Updated:      01:38   05/01/2025                                                  ⠀⡘⠀⠀⠀⠀⢊⣤⠀⠀⠤⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠤⠄⠀⢸⠃⠀⠀⠀⠀⠀⠃⠀   */
/*                                                                                     ⢠⠁⢀⠀⠀⠀⠈⢿⡀⠀⠀⠀⠀⠀⠀⢀⡀⠀⠀⠀⠀⠀⠀⢀⠏⠀⠀⠀⠀⠀⠀⠸⠀   */
/*   Path:         ./src/core/main.c                                                   ⠘⠸⠘⡀⠀⠀⠀⠀⢣⠀⠀⠀⠀⠀⠀⠁⠀⠃⠀⠀⠀⠀⢀⠎⠀⠀⠀⠀⠀⢠⠀⠀⡇   */
/*                                                                                     ⠀⠇⢆⢃⠀⠀⠀⠀⠀⡏⢲⢤⢀⡀⠀⠀⠀⠀⠀⢀⣠⠄⡚⠀⠀⠀⠀⠀⠀⣾⠀⠀⠀   */
/*                                                                                     ⢰⠈⢌⢎⢆⠀⠀⠀⠀⠁⣌⠆⡰⡁⠉⠉⠀⠉⠁⡱⡘⡼⠇⠀⠀⠀⠀⢀⢬⠃⢠⠀⡆   */
/*                                                                                     ⠀⢢⠀⠑⢵⣧⡀⠀⠀⡿⠳⠂⠉⠀⠀⠀⠀⠀⠀⠀⠁⢺⡀⠀⠀⢀⢠⣮⠃⢀⠆⡰⠀   */
/*                                                                                     ⠀⠀⠑⠄⣀⠙⡭⠢⢀⡀⠀⠁⠄⣀⣀⠀⢀⣀⣀⣀⡠⠂⢃⡀⠔⠱⡞⢁⠄⣁⠔⠁⠀   */
/*                                                                                     ⠀⠀⠀⠀⠀⢠⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⠉⠁⠀⠀⠀⠀   */
/*                                                                                     ⠀⠀⠀⠀⠀⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀   */


#include "../header.h"

void	set_img(t_vars *vars, const char *textures_dir)
{
	int		img_width;
	int		img_height;
	char	path[256];

	snprintf(path, sizeof(path), "%s/bg.xpm", textures_dir);
	vars->graphics.bg_img = mlx_xpm_file_to_image(vars->graphics.mlx, path,
			&img_width, &img_height);
	snprintf(path, sizeof(path), "%s/player.xpm", textures_dir);
	vars->graphics.player_img = mlx_xpm_file_to_image(vars->graphics.mlx, path,
			&img_width, &img_height);
	snprintf(path, sizeof(path), "%s/exit.xpm", textures_dir);
	vars->graphics.exit_img = mlx_xpm_file_to_image(vars->graphics.mlx, path,
			&img_width, &img_height);
	snprintf(path, sizeof(path), "%s/item.xpm", textures_dir);
	vars->graphics.item_img = mlx_xpm_file_to_image(vars->graphics.mlx, path,
			&img_width, &img_height);
	snprintf(path, sizeof(path), "%s/wall.xpm", textures_dir);
	vars->graphics.wall_img = mlx_xpm_file_to_image(vars->graphics.mlx, path,
			&img_width, &img_height);
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

static void	setup_and_run_game(t_vars *vars, const char *textures_dir)
{
	set_img(vars, textures_dir);
	read_and_display_map(vars);
	mlx_hook(vars->graphics.win, 2, 1L << 0, move_player, vars);
	mlx_hook(vars->graphics.win, 17, 0, close_window, vars);
	mlx_loop(vars->graphics.mlx);
}

int	main(int ac, char **av)
{
	t_vars	vars;

	if (ac != 3)
	{
		ft_printf("Error - Usage: ./game levels/lvl1 textures\n");
		return (0);
	}
	check_args_and_init_vars(av, &vars);
	if (map_check(&vars) == 1)
	{
		return (0);
	}
	init_mlx_and_window(&vars);
	setup_and_run_game(&vars, av[2]);
	return (0);
}
