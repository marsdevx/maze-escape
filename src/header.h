/*                                                                                        ⣇⣿⠘⣿⣿⣿⡿⡿⣟⣟⢟⢟⢝⠵⡝⣿⡿⢂⣼⣿⣷⣌⠩⡫⡻⣝⠹⢿⣿⣷   */
/*                                                                                        ⡆⣿⣆⠱⣝⡵⣝⢅⠙⣿⢕⢕⢕⢕⢝⣥⢒⠅⣿⣿⣿⡿⣳⣌⠪⡪⣡⢑⢝⣇   */
/*   File:         header.h                                                               ⡆⣿⣿⣦⠹⣳⣳⣕⢅⠈⢗⢕⢕⢕⢕⢕⢈⢆⠟⠋⠉⠁⠉⠉⠁⠈⠼⢐⢕⢽   */
/*                                                                                        ⡗⢰⣶⣶⣦⣝⢝⢕⢕⠅⡆⢕⢕⢕⢕⢕⣴⠏⣠⡶⠛⡉⡉⡛⢶⣦⡀⠐⣕⢕   */
/*   Project:      game-in-c                                                              ⡝⡄⢻⢟⣿⣿⣷⣕⣕⣅⣿⣔⣕⣵⣵⣿⣿⢠⣿⢠⣮⡈⣌⠨⠅⠹⣷⡀⢱⢕   */
/*   Github:       marsdevx                                                               ⡝⡵⠟⠈⢀⣀⣀⡀⠉⢿⣿⣿⣿⣿⣿⣿⣿⣼⣿⢈⡋⠴⢿⡟⣡⡇⣿⡇⡀⢕   */
/*                                                                                        ⡝⠁⣠⣾⠟⡉⡉⡉⠻⣦⣻⣿⣿⣿⣿⣿⣿⣿⣿⣧⠸⣿⣦⣥⣿⡇⡿⣰⢗⢄   */
/*   Created:      01:38   05/01/2025                                                     ⠁⢰⣿⡏⣴⣌⠈⣌⠡⠈⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣬⣉⣉⣁⣄⢖⢕⢕⢕   */
/*   Updated:      01:42   05/01/2025                                                     ⡀⢻⣿⡇⢙⠁⠴⢿⡟⣡⡆⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣵⣵⣿   */
/*                                                                                        ⡻⣄⣻⣿⣌⠘⢿⣷⣥⣿⠇⣿⣿⣿⣿⣿⣿⠛⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿   */
/*   Path:         ./src/header.h                                                         ⣷⢄⠻⣿⣟⠿⠦⠍⠉⣡⣾⣿⣿⣿⣿⣿⣿⢸⣿⣦⠙⣿⣿⣿⣿⣿⣿⣿⣿⠟   */
/*                                                                                        ⡕⡑⣑⣈⣻⢗⢟⢞⢝⣻⣿⣿⣿⣿⣿⣿⣿⠸⣿⠿⠃⣿⣿⣿⣿⣿⣿⡿⠁⣠   */
/*                                                                                        ⡝⡵⡈⢟⢕⢕⢕⢕⣵⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣶⣿⣿⣿⣿⣿⠿⠋⣀⣈⠙   */
/*                                                                                        ⡝⡵⡕⡀⠑⠳⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠛⢉⡠⡲⡫⡪⡪⡣   */

#ifndef HEADER_H
# define HEADER_H

# include "../libs/libft/libft.h"           // libft
# include "../libs/libftprintf/ft_printf.h" // printf
# include "mlx.h"    // For mlx funcs
# include <fcntl.h>  // For open() and O_RDONLY
# include <stdio.h>  // For perror()
# include <stdlib.h> // For exit() and EXIT_FAILURE
# include <unistd.h> // For close(), read(), ssize_t


#ifdef MACOS
// macOS keycodes
# define KEY_W 13
# define KEY_A 0
# define KEY_S 1
# define KEY_D 2
# define KEY_ESC 53
#endif

#ifdef LINUX
// Linux keycodes
# define KEY_W 119
# define KEY_A 97
# define KEY_S 115
# define KEY_D 100
# define KEY_ESC 65307
#endif

# define MAX_COLLECTIBLES 100

typedef struct
{
	int				width;
	int				height;
	int				all_collectible;
	int				all_exits;
	int				all_players;
}					t_map_info;

typedef struct
{
	int				tile_size;
	int				current_x;
	int				current_y;
	int				start_pos_x;
	int				start_pos_y;
	int				initial_position_set;
	int				collectible_count;
	int				move_count;
	int				collectible_x[MAX_COLLECTIBLES];
	int				collectible_y[MAX_COLLECTIBLES];
}					t_game_state;

typedef struct
{
	void			*mlx;
	void			*win;
	void			*bg_img;
	void			*player_img;
	void			*exit_img;
	void			*item_img;
	void			*wall_img;
}					t_graphics;

typedef struct
{
	t_graphics		graphics;
	t_game_state	state;
	t_map_info		map_info;
	char			*path;
}					t_vars;

typedef struct
{
	int				players;
	int				exits;
	int				collectibles;
}					t_counts;

// Map
void				get_map_info(t_vars *vars);
void				read_and_display_map(t_vars *vars);

// Core
int					move_player(int key, t_vars *vars);
char				next_px(int next_x, int next_y, t_vars *vars);
int					open_map_file(const char *path);
int					close_window(t_vars *vars);

// Check
int					is_enclosed_in_walls(int fd);
int					map_check(t_vars *vars);
void				count_map_chars(t_vars *vars);

#endif