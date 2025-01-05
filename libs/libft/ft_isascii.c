/*                                                                                          ⣿⣿⣿⣿⣿⣿⣿⡿⢟⣫⣥⣶⣖⣲⣖⣲⡖⠉⠙⠛⢿⣿⣿⣿⣿⣿⣿⣿   */
/*                                                                                          ⣿⣿⣿⣿⣿⢟⢍⣮⡷⠗⣊⣵⣾⣿⣿⣿⣷⣍⡳⢄⠀⠉⠻⢿⣿⣿⣿⣿   */
/*   File:         ft_isascii.c                                                             ⣿⣿⣿⠟⢁⣵⣷⣶⣶⠮⠿⠿⣿⣿⣿⣿⣿⢉⡻⢷⡄⠀⣠⣄⠻⣿⣿⣿   */
/*                                                                                          ⣿⣿⢯⢮⣾⡿⣰⡟⡡⣪⣥⣶⡄⠰⣿⣿⣿⣮⣿⡎⣿⣶⡸⣿⡆⠙⣿⣿   */
/*   Project:      game-in-c                                                                ⣿⣏⠃⣿⣿⣿⡏⢱⣾⣿⣿⣿⣿⣾⣿⣿⣿⣿⣿⣼⣿⣿⣷⣧⢠⡀⢸⣿   */
/*   Github:       marsdevx                                                                 ⣿⡈⢀⡏⣬⣿⣿⡜⣿⣿⣿⣿⣿⣿⢻⣿⣿⣿⣿⣯⣿⡻⣻⣻⡜⠇⢀⣿   */
/*                                                                                          ⣧⠇⣾⣇⣫⡿⢿⣿⣌⣙⡛⢉⣽⣿⣿⣿⣿⣿⣿⣿⣿⢿⣜⢹⣿⠀⠈⣽   */
/*   Created:      01:38   05/01/2025                                                       ⣿⠀⣿⣿⣿⣷⣾⣿⣿⣿⣿⣬⣿⣿⣿⣿⣿⣿⣿⣯⣾⣿⠿⡿⣀⡀⠀⣿   */
/*   Updated:      01:38   05/01/2025                                                       ⣿⣇⢸⡿⣿⣿⢿⣿⣿⣿⣿⡻⣿⣿⣿⢻⣿⣿⣿⣿⡿⢡⡾⣻⣿⠃⢸⣿   */
/*                                                                                          ⣿⣿⣄⢳⡹⣏⢟⣯⣷⣿⠛⣣⣭⡝⣿⣿⣿⣝⣻⡿⠷⠻⡁⡋⢀⢠⣿⣿   */
/*   Path:         ./libs/libft/ft_isascii.c                                                ⣿⣿⣿⣆⠳⢀⡻⣿⣿⣿⣜⠻⡿⣉⣼⣿⡿⠿⠿⠛⠀⡀⠉⠐⣵⣿⣿⣿   */
/*                                                                                          ⣿⣿⣿⣿⣷⣤⡈⠢⢝⡫⢿⣷⣽⣛⣛⣿⡶⠆⣀⠔⠋⢀⣤⣾⣿⣿⣿⣿   */
/*                                                                                          ⣿⣿⣿⣿⣿⣿⣿⣶⣤⣍⣛⠈⠙⠉⠉⠡⠤⣤⣀⣤⣴⣿⣿⣿⣿⣿⣿⣿   */


#include "libft.h"

int	ft_isascii(int c)
{
	if (c <= 127 && c >= 0)
	{
		return (1);
	}
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>
// int main() {
// 	printf("%d\n", isascii('0'));
// 	printf("%d\n", isascii(-1));
// 	printf("%d\n", isascii(0177));
// 	printf("%d\n", isascii(190));

// 	printf("%d\n", ft_isascii('0'));
// 	printf("%d\n", ft_isascii(-1));
// 	printf("%d\n", ft_isascii(0177));
// 	printf("%d\n", ft_isascii(190));
// }
