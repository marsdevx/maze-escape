/*                                                            ⠀⠀⠀⠀⠀⠀⠀⢻⣿⡿⣌⢿⣿⣿⣿⣿⣿⣷⣦⡀⠀⠀⢀⣠⠄⣠⣶⣿⣿⣿⣿⣿⣿⣟⣠⣾⣿⣿⣿⠟⢡⣿⣿⢿⣟⡣⠞⣿⣿⣿⣿⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⠀⠀⠀⠀⠀⢸⣽⠏⠘⣯⢻⣿⣿⣿⣿⣿⠯⠑⠛⣛⣿⣗⣋⠉⢉⢉⣛⠿⣿⣿⣿⣿⣿⣿⣮⣍⠀⠴⠒⠤⣾⣟⣭⡊⠰⢿⣿⣿⣿⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⠀⠀⠀⠀⠀⠆⠻⡧⠘⣿⡅⠹⣿⠟⣋⣤⣶⢎⣾⣿⣿⣿⣿⣿⣿⣿⣮⣝⢆⠙⢿⣿⣿⣿⣿⣿⣷⣄⢨⣿⣿⠿⠿⠭⢬⣘⢿⣿⡟⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⠀⠀⠀⠀⠀⠀⢷⠦⢀⣽⡷⢀⣴⣿⣿⣿⣷⣿⣿⣿⣿⣿⢿⣿⣿⣿⣿⣿⣿⣦⡢⠹⣮⢻⣿⣿⣿⣿⣧⡉⠿⠷⣶⠄⡀⢘⣿⣿⠇⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠀⠿⣡⣿⣿⢿⣿⣟⣽⣿⣿⣿⣿⣿⣎⣿⣿⣟⣿⣿⣿⣿⣿⣄⢎⠃⢻⣿⣿⣿⣿⣷⡨⣛⠺⠋⠠⠸⠟⣿⢰⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⢀⣾⣿⣿⢏⣿⣿⢹⡏⣿⣿⣿⣿⣿⣿⡸⣿⣿⣮⢿⣿⣿⣿⣟⢧⡣⡀⢻⣿⡿⣿⣿⣷⡸⡗⠀⠀⣼⡿⠋⢺⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*   File:         ft_toupper.c                               ⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣿⣿⣿⡟⡼⣿⠏⣿⣧⣿⣿⣿⣿⠸⣿⡇⠘⢿⣿⣧⡙⣿⣟⣿⣶⡳⣅⠈⣿⣷⢹⣿⣿⣧⠀⡠⢀⡉⠀⢠⣧⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣿⠛⣸⡟⢠⢹⣿⢻⣿⣿⣿⣧⢻⣿⡰⣬⡻⣿⣜⣌⠻⣮⡻⣿⣜⢆⠸⣿⡏⣿⣿⣿⡌⣷⠏⠀⠀⡺⣧⠎⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*   Project:      game-in-c                                  ⠀⠀⠀⠀⠀⠀⣰⡟⣼⣿⣿⣿⡟⢠⣿⢁⣿⢸⣿⣽⣿⣿⣿⡌⣇⢻⣧⠻⠘⢙⢫⣭⣧⡐⢦⡲⣭⣥⡁⢿⣯⢹⣿⡞⣇⢑⣀⡔⢸⣧⢻⣿⡜⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*   Github:       marsdevx                                   ⠀⠀⠀⠀⣠⣾⡟⣼⣿⣿⣿⣿⡇⣸⠇⣸⡟⡞⡿⡇⢿⣿⣿⣇⠘⡌⢟⡄⣿⣮⡣⠹⣧⣻⣮⡳⢌⢿⣿⣸⣿⠘⣿⡇⣿⠸⢏⣴⣿⣿⠈⣿⢿⣞⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⣠⣾⡿⠋⢰⣿⢻⣿⣿⣿⡇⡿⠀⢿⣛⡃⢡⢻⠈⢧⠹⣿⣆⠲⠈⢿⡜⣿⣿⠦⠄⠙⠛⠛⠒⠤⠍⠛⣿⡆⣿⣿⣿⠲⠟⠛⣾⢏⡀⣿⣏⢿⣎⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*   Created:      01:38   05/01/2025                         ⣴⡿⠟⠋⠀⠀⣾⣿⣾⣿⠇⣿⠁⣣⢰⣿⣿⣷⡀⢏⢧⠈⣧⠘⢿⣄⠀⠘⠿⠉⢀⡀⠀⠀⠀⠀⠀⢢⣄⠀⢉⣰⣿⣿⣿⡆⠀⠾⣣⢿⢀⠘⣿⢦⢻⣷⢝⢿⣿⣿⣿⣿⣿⣿⣿  */
/*   Updated:      01:38   05/01/2025                         ⠀⠀⠀⠀⠀⢠⣿⣿⣿⣿⡀⣿⠀⣿⣼⣿⡿⠿⠗⣈⢮⡃⠘⢂⠈⠻⢿⡄⢟⢰⣿⣇⣰⡆⠀⠀⣦⢸⣿⠃⢸⣿⣿⣿⢹⠱⢦⡸⢏⡾⢸⠀⠘⠀⡑⣝⢿⣿⣮⣝⢿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⠀⠀⠀⢸⣿⣿⢸⣿⡇⢸⡄⣿⡯⠁⣠⠀⠀⠀⠨⣿⣷⣄⠹⣢⣜⡻⣷⣿⣿⣿⣏⠠⣆⡄⠀⣾⣿⣼⣾⣿⣿⡇⢸⠼⢾⡇⣾⠃⡘⡇⣦⢠⡈⠪⢳⣭⣛⠿⣿⣿⣿⣿⣿  */
/*   Path:         ./libs/libft/ft_toupper.c                  ⠀⠀⠀⠀⠀⢸⡇⣿⠘⣿⣇⠈⣧⠻⠁⣸⣿⣀⣤⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠷⠾⣶⠾⠿⠿⡿⢾⣿⣿⡇⢻⢰⠞⡠⠀⠀⣇⣿⣻⣇⣿⣿⣿⣶⣿⣿⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⡄⠀⠀⢸⡇⢹⡆⢻⣿⡆⠘⠄⢄⠸⣿⣿⡏⠀⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⣠⡾⣟⣿⡇⣸⣿⣿⣇⣼⢨⠞⠁⢰⡀⣿⢸⢸⣿⣮⡻⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⠇⠀⠀⢸⡇⠈⢧⠈⢿⣷⠀⠀⠘⣷⣽⣿⣿⣶⣿⣿⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣾⣿⣿⣿⣿⠁⣿⣿⣿⠿⣿⠀⠀⡀⢸⡇⢻⣿⡖⣿⣿⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⡇⠀⠀⠀⣧⠀⠈⠆⠈⠻⣧⠱⡄⠸⣿⣫⡔⢹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢫⡇⣿⣿⣿⠀⡟⠀⢸⡇⢸⣿⡈⣿⣇⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⠀⠀⠀⠀⠸⡀⠀⠀⠀⠀⢀⠰⣦⡀⣧⣭⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣵⡿⠃⣿⢻⡟⢰⡇⠀⠘⣧⠀⣿⣷⠸⣿⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⢀⡾⠀⣿⣇⠸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠋⣠⠀⣿⣾⡇⢾⠃⠀⠀⣿⢠⢸⣿⣃⢿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠊⠀⡠⢻⣿⡤⣝⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠛⠁⣠⣾⡿⢰⣇⣿⠸⢹⠀⠀⠀⠸⠘⠀⢛⠉⠈⠇⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠸⣿⣇⢿⡇⢰⣬⠙⠛⠿⠿⣿⣿⣿⣿⣿⠿⠛⠁⠀⣠⣾⠟⣯⣾⣼⢹⡟⠁⡎⠀⢰⡶⠿⠟⠋⡛⠛⠓⠾⢭⣝⣛⠻⠿⢿⣿⣿⣿⣿⣿  */


#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

// #include <stdio.h>
// int main() {
// 	printf("%c", ft_toupper('l'));
// }