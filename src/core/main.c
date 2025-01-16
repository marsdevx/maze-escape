/*                                                            ⠀⠀⠀⠀⠀⠀⠀⢻⣿⡿⣌⢿⣿⣿⣿⣿⣿⣷⣦⡀⠀⠀⢀⣠⠄⣠⣶⣿⣿⣿⣿⣿⣿⣟⣠⣾⣿⣿⣿⠟⢡⣿⣿⢿⣟⡣⠞⣿⣿⣿⣿⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⠀⠀⠀⠀⠀⢸⣽⠏⠘⣯⢻⣿⣿⣿⣿⣿⠯⠑⠛⣛⣿⣗⣋⠉⢉⢉⣛⠿⣿⣿⣿⣿⣿⣿⣮⣍⠀⠴⠒⠤⣾⣟⣭⡊⠰⢿⣿⣿⣿⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⠀⠀⠀⠀⠀⠆⠻⡧⠘⣿⡅⠹⣿⠟⣋⣤⣶⢎⣾⣿⣿⣿⣿⣿⣿⣿⣮⣝⢆⠙⢿⣿⣿⣿⣿⣿⣷⣄⢨⣿⣿⠿⠿⠭⢬⣘⢿⣿⡟⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⠀⠀⠀⠀⠀⠀⢷⠦⢀⣽⡷⢀⣴⣿⣿⣿⣷⣿⣿⣿⣿⣿⢿⣿⣿⣿⣿⣿⣿⣦⡢⠹⣮⢻⣿⣿⣿⣿⣧⡉⠿⠷⣶⠄⡀⢘⣿⣿⠇⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠀⠿⣡⣿⣿⢿⣿⣟⣽⣿⣿⣿⣿⣿⣎⣿⣿⣟⣿⣿⣿⣿⣿⣄⢎⠃⢻⣿⣿⣿⣿⣷⡨⣛⠺⠋⠠⠸⠟⣿⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⢀⣾⣿⣿⢏⣿⣿⢹⡏⣿⣿⣿⣿⣿⣿⡸⣿⣿⣮⢿⣿⣿⣿⣟⢧⡣⡀⢻⣿⡿⣿⣿⣷⡸⡗⠀⠀⣼⡿⠋⢺⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*   File:         main.c                                     ⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⣿⣿⡟⡼⣿⠏⣿⣧⣿⣿⣿⣿⠸⣿⡇⠘⢿⣿⣧⡙⣿⣟⣿⣶⡳⣅⠈⣿⣷⢹⣿⣿⣧⠀⡠⢀⡉⠀⢠⣧⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣿⠛⣸⡟⢠⢹⣿⢻⣿⣿⣿⣧⢻⣿⡰⣬⡻⣿⣜⣌⠻⣮⡻⣿⣜⢆⠸⣿⡏⣿⣿⣿⡌⣷⠏⠀⠀⡺⣧⠎⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*   Project:      maze-escape                                ⠀⠀⠀⠀⠀⠀⣰⡟⣼⣿⣿⣿⡟⢠⣿⢁⣿⢸⣿⣽⣿⣿⣿⡌⣇⢻⣧⠻⠘⢙⢫⣭⣧⡐⢦⡲⣭⣥⡁⢿⣯⢹⣿⡞⣇⢑⣀⡔⢸⣧⢻⣿⡜⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*   Github:       marsdevx                                   ⠀⠀⠀⠀⣠⣾⡟⣼⣿⣿⣿⣿⡇⣸⠇⣸⡟⡞⡿⡇⢿⣿⣿⣇⠘⡌⢟⡄⣿⣮⡣⠹⣧⣻⣮⡳⢌⢿⣿⣸⣿⠘⣿⡇⣿⠸⢏⣴⣿⣿⠈⣿⢿⣞⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⣠⣾⡿⠋⢰⣿⢻⣿⣿⣿⡇⡿⠀⢿⣛⡃⢡⢻⠈⢧⠹⣿⣆⠲⠈⢿⡜⣿⣿⠦⠄⠙⠛⠛⠒⠤⠍⠛⣿⡆⣿⣿⣿⠲⠟⠛⣾⢏⡀⣿⣏⢿⣎⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*   Created:      01:38   05/01/2025                         ⣴⡿⠟⠋⠀⠀⣾⣿⣾⣿⠇⣿⠁⣣⢰⣿⣿⣷⡀⢏⢧⠈⣧⠘⢿⣄⠀⠘⠿⠉⢀⡀⠀⠀⠀⠀⠀⢢⣄⠀⢉⣰⣿⣿⣿⡆⠀⠾⣣⢿⢀⠘⣿⢦⢻⣷⢝⢿⣿⣿⣿⣿⣿⣿⣿  */
/*   Updated:      03:50   05/01/2025                         ⠀⠀⠀⠀⠀⢠⣿⣿⣿⣿⡀⣿⠀⣿⣼⣿⡿⠿⠗⣈⢮⡃⠘⢂⠈⠻⢿⡄⢟⢰⣿⣇⣰⡆⠀⠀⣦⢸⣿⠃⢸⣿⣿⣿⢹⠱⢦⡸⢏⡾⢸⠀⠘⠀⡑⣝⢿⣿⣮⣝⢿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⠀⠀⠀⢸⣿⣿⢸⣿⡇⢸⡄⣿⡯⠁⣠⠀⠀⠀⠨⣿⣷⣄⠹⣢⣜⡻⣷⣿⣿⣿⣏⠠⣆⡄⠀⣾⣿⣼⣾⣿⣿⡇⢸⠼⢾⡇⣾⠃⡘⡇⣦⢠⡈⠪⢳⣭⣛⠿⣿⣿⣿⣿⣿  */
/*   Path:         ./src/core/main.c                          ⠀⠀⠀⠀⠀⢸⡇⣿⠘⣿⣇⠈⣧⠻⠁⣸⣿⣀⣤⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠷⠾⣶⠾⠿⠿⡿⢾⣿⣿⡇⢻⢰⠞⡠⠀⠀⣇⣿⣻⣇⣿⣿⣿⣶⣿⣿⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⡄⠀⠀⢸⡇⢹⡆⢻⣿⡆⠘⠄⢄⠸⣿⣿⡏⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⣠⡾⣟⣿⡇⣸⣿⣿⣇⣼⢨⠞⠁⢰⡀⣿⢸⢸⣿⣮⡻⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⠇⠀⠀⢸⡇⠈⢧⠈⢿⣷⠀⠀⠘⣷⣽⣿⣿⣶⣿⣿⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣾⣿⣿⣿⣿⠁⣿⣿⣿⠿⣿⠀⠀⡀⢸⡇⢻⣿⡖⣿⣿⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⡇⠀⠀⠀⣧⠀⠈⠆⠈⠻⣧⠱⡄⠸⣿⣫⡔⢹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢫⡇⣿⣿⣿⠀⡟⠀⢸⡇⢸⣿⡈⣿⣇⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⠀⠀⠀⠀⠸⡀⠀⠀⠀⠀⢀⠰⣦⡀⣧⣭⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣵⡿⠃⣿⢻⡟⢰⡇⠀⠘⣧⠀⣿⣷⠸⣿⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⢀⡾⠀⣿⣇⠸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠋⣠⠀⣿⣾⡇⢾⠃⠀⠀⣿⢠⢸⣿⣃⢿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠊⠀⡠⢻⣿⡤⣝⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠛⠁⣠⣾⡿⢰⣇⣿⠸⢹⠀⠀⠀⠸⠘⠀⢛⠉⠈⠇⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠸⣿⣇⢿⡇⢰⣬⠙⠛⠿⠿⣿⣿⣿⣿⣿⠿⠛⠁⠀⣠⣾⠟⣯⣾⣼⢹⡟⠁⡎⠀⢰⡶⠿⠟⠋⡛⠛⠓⠾⢭⣝⣛⠻⠿⢿⣿⣿⣿⣿⣿  */

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
			win_height, "Maze Escape");
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

void print_help() {
  ft_printf(
    "Maze Escape - A fun, customizable maze game with support for custom levels and textures.\n\n"
    "Usage:\n"
    "  1. Navigate to the Game Directory:\n"
    "     cd ~/Downloads/Maze-Escape\n\n"
    "  2. Run the Game:\n"
    "     ./maze_escape <level> <texture>\n"
    "     Example:\n"
    "       ./maze_escape levels/lvl1 textures/pacman\n\n"
    "  3. Customize Your Game:\n"
    "     Modify the level and texture by changing the arguments:\n"
    "       Levels:\n"
    "         - levels/lvl1\n"
    "         - levels/lvl2\n"
    "         - levels/lvl3\n"
    "         - levels/lvl4\n"
    "       Textures:\n"
    "         - textures/pacman\n"
    "         - textures/adventurer\n"
    "         - textures/chicken\n"
    "         - textures/pokemon\n"
    "         - textures/space-ship\n"
    "         - textures/time-adventure\n\n"
    "Advanced Options:\n"
    "  Add Your Own Map:\n"
    "    - Maps must be `.ber` files.\n"
    "    - Maps can only contain the following characters:\n"
    "        | CHAR | OBJECT        |\n"
    "        |------|---------------|\n"
    "        | 1    | Wall          |\n"
    "        | C    | Collectible   |\n"
    "        | E    | Exit          |\n"
    "        | P    | Player        |\n"
    "        | 0    | Background    |\n"
    "    - Example of a valid map:\n"
    "        11111111111\n"
    "        10000P1C001\n"
    "        11111011101\n"
    "        10001000001\n"
    "        101011111E1\n"
    "        11111111111\n\n"
    "  Add Your Own Textures:\n"
    "    - The `textures` folder must contain exactly 5 files in the `.xpm` format.\n"
    "    - Files must be named:\n"
    "        - bg.xpm      (background)\n"
    "        - exit.xpm    (exit point)\n"
    "        - item.xpm    (collectible items)\n"
    "        - player.xpm  (player character)\n"
    "        - wall.xpm    (walls)\n\n"
    "Notes:\n"
    "  - Ensure you have appropriate permissions to execute the game binary.\n"
    "  - Custom maps and textures must adhere to the specified rules for the game to function correctly.\n\n"
    "For additional help, refer to the project documentation.\n"
  );
}

int	main(int ac, char **av)
{
  if (ac != 3 || ft_strncmp(av[1], "--help", 7) == 0 || ft_strncmp(av[1], "-h", 3) == 0) {
    print_help();
    return (0);
  }

	t_vars	vars;

	check_args_and_init_vars(av, &vars);
	if (map_check(&vars) == 1)
	{
		return (0);
	}
	init_mlx_and_window(&vars);
	setup_and_run_game(&vars, av[2]);
	return (0);
}
