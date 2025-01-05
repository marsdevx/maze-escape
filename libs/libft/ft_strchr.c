/*                                                                           ⣿⣿⣿⣿⣿⣿⣿⣿⣯⣿⠋⠛⢿⣿⡿⠿⠛⣛⣛⣉⣩⣭⣭⣭⣭⣭⣍⣉⣛⡛⠿⢿⠃⠤⠘⣿⡾⣿⣿⣿⣿⣿⣿   */
/*                                                                           ⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠇⠰⡄⠲⣾⣿⡿⢿⣛⣻⣭⣭⣭⣭⣭⣭⣿⣛⣻⣿⣿⡇⢌⡁⡆⢿⣿⣿⣿⣿⣿⣿⣿   */
/*                                                                           ⣿⣿⣿⣿⣿⣿⣿⠟⣩⣴⣿⡐⢡⠱⢹⣾⣿⣿⣿⡿⢿⣿⣛⣛⣛⣛⣻⣿⢿⣿⣿⣄⠂⠄⢳⣆⠻⣿⣯⣿⣿⣿⣿   */
/*                                                                           ⣿⣿⣿⣿⣿⡿⢁⣾⣿⣿⡿⡁⠆⡀⠇⣿⠏⣱⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣾⣹⣆⢀⠰⡹⣷⡈⢿⣿⣹⣿⣿   */
/*                                                                           ⣿⣿⣿⣿⠏⣰⣿⣿⡿⣫⣤⣻⣦⣔⣸⡿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⡻⣟⣭⣭⣊⢷⡌⢿⣿⣿⣿   */
/*                                                                           ⣿⣻⣿⢏⣾⣿⣿⡟⣵⣻⣽⣾⣷⣾⣭⣵⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⢿⣿⣿⣿⣿⣷⣿⣿⣿⣿⣿⣻⡌⢿⣷⣿   */
/*   File:         ft_strchr.c                                               ⣷⣿⠇⣼⣿⣿⣿⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⣿⣿⣯⣿⣿⣯⣿⡿⣿⣿⣿⣿⡈⣿⣿   */
/*                                                                           ⣿⡟⣸⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⣿⣿⣿⣿⣿⣏⣿⣿⣿⣿⣿⣿⢻⣿⢿⣹⡏⣿⣿⣿⢻⣿⣿⣿⣇⢻⣿   */
/*   Project:      game-in-c                                                 ⣿⠃⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣶⣿⢻⣿⡿⣿⣿⢻⣽⣹⣿⣿⣿⣿⡾⣿⡾⣿⡇⣿⡸⣿⢸⣿⣿⣿⣿⠘⣿   */
/*   Github:       marsdevx                                                  ⣿⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢸⣿⣏⢼⣻⣷⢻⣿⢸⡿⡏⣿⣿⣿⣿⢃⣿⣇⡏⣿⠛⠺⠾⠋⣿⣿⣿⣿⡄⣿   */
/*                                                                           ⡟⢸⣿⣿⣿⣿⣿⣿⣿⣟⣿⣿⣿⣎⡿⠾⠛⠘⠋⠘⠻⢸⡇⠇⢻⣿⡿⠹⣿⠙⣵⡆⠀⠀⢤⣄⡀⣿⣿⣿⣿⡇⢸   */
/*   Created:      01:38   05/01/2025                                        ⡇⢸⣿⣿⣿⣿⣿⣿⣿⣿⠼⣿⣿⡋⠀⣠⣶⡷⠀⠀⠀⢠⣸⣿⣿⣿⣿⣿⣿⡇⠉⠀⠀⢀⠘⣿⡇⢸⣿⡼⣿⡇⢸   */
/*   Updated:      01:38   05/01/2025                                        ⣷⢸⣿⣿⣿⣿⣿⣿⣿⢿⡶⢻⣿⡇⣾⣿⠈⠁⠀⠀⢠⠀⣿⣿⣿⣿⣿⣿⣿⣿⡘⣦⣴⡾⢠⡿⢙⡘⣿⣇⢸⡇⢸   */
/*                                                                           ⣿⠀⣿⣿⣿⣿⣿⣿⡿⣫⣕⢻⣿⣇⠾⣿⣆⠶⣶⣶⡟⣰⣿⣿⣿⣿⣿⣿⣿⣿⣷⣬⡍⣤⣹⡶⣿⡇⣿⡿⡸⡇⢸   */
/*   Path:         ./libs/libft/ft_strchr.c                                  ⣿⡀⣿⣿⣿⣿⣿⡿⣼⢯⣯⠋⣿⣿⣰⣶⣩⣶⣴⢦⣾⣿⣿⣿⣿⣿⣿⡿⣿⣿⣿⡿⢟⣿⣵⣻⣳⡧⣿⣿⣇⡇⣿   */
/*                                                                           ⣿⡇⣿⣿⣿⣿⣿⣷⠹⡼⣧⣧⢿⣿⢇⢧⢯⢯⣟⣾⣿⢋⢩⠍⣭⣵⣶⣶⣶⣦⡀⠛⢸⣿⣿⣿⣷⡯⣿⣿⣾⠀⣿   */
/*                                                                           ⣿⣧⢸⣿⣿⣿⣿⣿⣷⡉⣓⠾⢸⣿⣿⣮⣯⣛⣯⣿⣿⢸⣶⣿⣿⣿⣿⣿⣿⣿⣿⡦⣸⣿⣿⣿⣿⠃⡿⣿⣿⠀⣿   */
/*                                                                           ⣿⣿⠸⣿⣿⣿⡏⣿⣿⣷⣿⣽⢸⣿⣼⡞⣿⣿⣿⣿⣿⣆⢻⣿⣿⣿⣿⣿⣿⣿⠟⣱⣿⣿⡿⢋⢡⢶⣷⣿⣿⠀⣿   */
/*                                                                           ⣿⣿⠆⣿⣿⣿⣿⣿⣿⣿⣿⢿⢸⣿⡏⣷⢈⢿⣿⣿⣿⣿⣇⡉⠿⣿⣿⡿⠏⣱⣾⡿⢉⣰⣾⠷⣹⣾⢿⣏⡇⢸⣿   */
/*                                                                           ⣿⣿⡇⢿⡇⣿⣿⣹⣿⣿⣿⣿⢸⣿⣿⣿⡞⢻⢰⡹⣭⣝⣛⣛⣛⡗⣚⢋⣭⣥⣶⣶⣿⣿⢟⣾⢧⡟⣾⡿⣹⢸⣿   */
/*                                                                           ⣿⣿⡇⢸⣿⢿⣿⣿⣿⣿⡟⡟⣾⣿⣧⢿⣟⠈⣼⣿⣿⣿⣿⣶⡏⣷⡎⣻⢿⢻⣿⡇⣿⣯⣿⣏⣾⣿⣿⢡⣻⠈⣿   */
/*                                                                           ⣿⣿⣿⠈⣿⢸⣿⣿⣿⣇⣿⢷⣿⣿⡽⣼⣿⢻⣸⣿⣿⣿⣿⣿⡫⣌⣿⣿⣜⣲⣭⣛⠏⣾⡟⣼⡟⣿⣿⣺⣿⡄⢿   */


#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	return (ft_memchr(s, c, ft_strlen(s) + 1));
}

// #include <string.h>
// #include <stdio.h>
// int main() {
// 	const char *str = "Hello, world!";
// 	char ch = 'o';

// 	char *result = strchr(str, 'o');
// 	char *my_result = ft_strchr(str, 'o');

// 	printf("Character '%c' position: %ld\n", ch, result - str);
// 	printf("Character '%c' position: %ld\n", ch, my_result - str);

// 	return (0);
// }