/*                                                            ⠀⠀⠀⠀⠀⠀⠀⠈⣾⡀⠆⢸⣞⣳⣿⣿⣿⣿⣿⣿⡿⢀⠇⣿⡽⠀⡼⣯⢡⢃⡷⠻⠯⠛⢋⢐⡃⣋⢀⡃⣁⣉⣉⣉⠛⣽⣳⠆⡏⢸⢯⢰⡇⡞⢸⢂⢿⣮⡌⣯⠈⣿⡀⢸⣳⢯⣽⢂⡷⢯  */
/*                                                            ⠀⠀⠀⠀⠀⠀⠀⢰⣟⠻⠀⣻⣿⣿⣿⣿⣿⢺⣿⣟⡟⢠⠘⣷⠏⠀⣿⠃⣋⢨⡶⣶⢯⡟⡈⣼⡇⡟⣼⡇⠀⣿⡿⣽⡇⣿⡽⢰⠃⣾⠇⣾⢰⢣⢸⢘⣓⠋⠃⠿⡀⡸⡇⠆⣿⣿⢾⣸⢼⣻  */
/*                                                            ⠀⠀⠀⠀⠀⠀⠀⠸⢈⣵⡇⣿⣿⣿⡟⠙⠻⣸⢷⡾⣹⠀⠘⣯⠂⢸⣯⠁⡏⢸⡽⣞⡷⢰⢡⣿⢃⠇⣿⣿⠀⣿⣿⣽⠰⣯⡇⡞⢠⡿⢰⠃⡎⣾⠘⣾⣿⣿⣷⢠⠄⣅⠛⠀⢹⣯⣿⢸⣻⢷  */
/*                                                            ⠀⠀⠀⠀⠀⠀⠀⠀⠻⣽⠀⣿⣿⡟⣼⡀⠜⣯⣟⣳⣟⠀⠀⣿⡀⣼⡳⠀⣇⢸⡿⡽⢃⢃⣿⡿⡘⢐⣻⢿⠀⣿⣳⡏⢸⣷⠃⢀⣾⢡⠇⡸⣸⡏⢠⣿⣿⣿⣷⢸⢢⣿⡸⢠⢘⠻⣽⢸⣿⡏  */
/*                                                            ⠀⠀⠀⠀⠀⢀⡒⡀⠀⠉⠄⢹⣿⢰⣟⣇⢂⠰⣯⢷⢯⡀⠄⢟⠀⣷⡇⢲⠹⠘⠁⠁⠀⠀⠉⠁⠁⠹⣻⣿⠀⢹⣿⠇⣾⠇⢀⡾⢡⢪⢆⢳⣿⠃⡾⣛⣛⡿⠿⢸⢸⣿⣇⠃⢸⣿⣮⠈⣷⠇  */
/*                                                            ⠀⠀⠀⠀⠀⢆⡱⠨⢄⠀⠈⠸⣧⠸⣻⢾⡄⠂⢹⣞⣟⡆⠀⢬⠀⠋⠀⠀⠀⠀⢀⠠⠀⡔⠠⠰⣶⣦⣤⣉⠀⡀⣿⢡⡿⢠⡞⠁⣵⠏⣠⣿⠃⣼⠯⠛⠋⠙⠛⠘⠸⠟⣿⠀⢸⣿⢾⢰⣿⢀  */
/*   File:         ft_isalnum.c                               ⠀⠀⠀⢠⠘⠤⢒⡉⢦⠀⡄⠀⢻⡄⢫⣟⢷⡘⡀⢹⡞⣷⡀⠸⠈⠀⢀⣤⠐⡂⢌⡘⢡⣿⣿⠂⢿⣿⣿⣿⣤⣧⣄⡜⠡⠋⣠⣾⣟⣰⣿⣯⣾⡇⠀⡀⠠⣀⠀⢀⠀⠈⠛⠇⢽⣿⡇⣼⡏⣸  */
/*                                                            ⠀⠀⢀⠆⠘⢬⡁⡈⢠⡇⠐⡆⠈⢳⡄⠻⣎⠳⣌⠀⠙⣍⣁⠀⠀⠀⣾⣷⠠⣵⡀⢘⡀⣼⢣⠇⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠰⠠⢮⡿⢄⢋⡈⣷⣄⠀⠀⠠⣴⢠⡿⢱⣻  */
/*   Project:      maze-escape                                ⠀⠀⣌⠂⣍⠢⢀⡇⢸⠇⣦⠈⡅⠀⠘⢄⠈⠳⡝⢦⡂⠈⠛⣧⡘⣦⡙⢿⡄⢳⣿⡟⡾⣭⡐⢿⣿⣿⣿⣿⣿⢿⣿⡿⣿⡿⣿⣿⣿⣿⣿⣿⣿⢰⠈⠆⢰⣊⢦⠅⣿⣿⣇⠀⠀⠁⡾⢁⣿⠍  */
/*   Github:       marsdevx                                   ⠀⡔⢢⠁⡆⠁⡼⡆⢸⡃⣽⠀⠆⣴⡶⢀⠁⠀⠈⠳⣍⠂⡀⠀⠑⠈⠿⣷⣿⣦⣨⣭⣥⢴⣶⣿⣿⣿⣿⠅⣽⣿⣿⡿⣿⣟⣯⠿⢿⣽⣿⣿⣿⡈⡷⣖⣿⢞⣍⣰⣿⣿⠇⡠⠂⠔⢠⡾⠋⡰  */
/*                                                            ⠰⡈⠦⠑⣠⢯⣝⡃⢸⡇⢀⡘⠠⣿⢸⢻⠛⡖⡀⠤⡈⠛⠒⠤⡀⠑⣶⣌⣙⠛⣾⣾⢞⡷⡻⣞⣺⢹⣽⣿⣿⢷⣿⡷⢟⣹⣗⡿⣿⣿⣿⣻⣯⣷⣦⢍⡈⢃⢹⣿⣻⢯⣾⠀⠀⠴⠋⠁⡴⠁  */
/*   Created:      06:02   05/01/2025                         ⠡⡅⠃⣰⢯⣳⢾⠀⢸⡇⢸⣃⠀⣿⡈⣿⡆⢹⠀⢶⣥⣉⠒⠄⠀⢠⣝⡻⡛⡸⢿⢺⣙⣟⢋⣿⣿⣯⡯⣿⣹⣼⣻⣩⣶⣽⣺⣵⣾⡭⣻⣯⠿⣿⣽⣶⠿⣾⢻⣾⣷⣯⡇⠀⡔⠀⢌⠊⢀⡀  */
/*   Updated:      06:02   05/01/2025                         ⠱⢀⡃⣽⢺⡵⣫⠀⠊⡅⢰⣻⠀⠘⢷⣬⡳⣈⡁⢸⡾⣝⡿⡆⣮⠈⣷⢟⣰⣛⣗⠾⡼⣪⣴⢔⡨⣶⣷⢽⣾⣿⡽⣯⡾⣜⣿⣾⣿⣧⣭⣚⣋⡻⡿⣯⣾⣿⣯⣿⣿⣷⢀⠓⢀⡜⢬⠇⠸⡄  */
/*                                                            ⠁⠼⢐⡃⠿⣜⠷⠀⢂⠅⣤⡟⣆⢄⠀⠙⢿⣮⣕⠸⣽⣫⢷⢁⣵⠀⣱⣊⣼⢬⣿⢿⣶⣻⣹⣾⣶⣿⣷⣞⣽⣿⣿⢿⡷⠿⣵⠞⣽⣿⢯⣤⣵⡾⣏⣩⣼⣿⣾⡿⢿⡏⣠⢡⣞⡟⡏⠀⣇⠇  */
/*   Path:         ./libs/libft/ft_isalnum.c                  ⠀⠀⠌⡐⠀⠀⠀⠈⠂⠆⢸⣳⠈⡌⡴⣄⡀⠙⠿⢠⢿⣵⡏⢸⣽⠀⢸⣟⣾⣿⣾⣿⢯⣿⣿⣿⣿⣿⣿⣿⣿⣿⢟⢫⣾⣿⣶⣝⡿⣿⣿⣿⣿⣷⣷⣾⡿⣟⣵⣿⣷⡅⢡⣟⡾⡽⠐⢰⣊⢧  */
/*                                                            ⠀⠀⢣⠀⠀⠀⠀⠀⡁⠄⠘⢽⡆⠰⠀⢻⣳⡄⠀⠘⣿⣞⠇⣟⣾⠁⢸⣿⣿⣿⣿⣿⣷⣿⣿⣿⣿⣿⡿⢟⣯⣾⣿⣿⣿⣿⣿⣿⣿⣶⣔⠙⣿⣿⡿⣫⣾⣿⣿⣿⢿⣿⣦⡙⡾⢡⠃⢦⡙⣮  */
/*                                                            ⠀⠀⢂⠆⠀⠀⠀⠀⢐⠈⠐⡀⠻⣄⠣⠈⢷⣻⡄⠈⣷⡟⢨⣟⣾⠀⡇⠻⣿⣿⣿⣿⣿⣿⡿⢫⣵⣶⣿⣿⣿⣿⣿⣿⢏⣽⣛⠿⣿⣿⡿⠼⣿⠏⣾⣿⣿⢋⡋⠘⣿⢿⣿⣿⣦⡙⢰⢢⡝⣳  */
/*                                                            ⢀⠀⠀⠂⠀⡀⠀⠀⢈⠜⡀⠐⠄⡈⠂⡡⠀⢻⣽⠀⣿⠇⣼⣟⡾⠈⣇⢸⣮⡛⢿⣿⠟⣡⣾⣿⣿⣿⣿⣿⣿⠿⣫⣿⣿⣿⣿⣷⡘⢿⡀⠀⠁⢀⣾⢟⡵⠋⠀⡇⢈⠻⠯⣿⡿⣻⣦⣬⣘⠳  */
/*                                                            ⠀⠈⠀⠀⠀⠀⠀⠀⢀⠊⡔⠈⠰⠠⠁⠄⠁⠀⠹⡀⣿⢀⣿⣿⣽⠃⣯⠀⢿⡿⢃⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣭⡻⢿⣿⣿⣿⣿⣮⣑⣀⣤⣭⡷⠋⠀⠀⢰⢁⡾⣷⠀⣩⣾⣿⣿⣿⣿⣿  */
/*                                                            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠌⠀⠀⠀⠐⠠⠈⡐⠀⠀⠀⡏⣼⣿⣿⣯⡇⣿⠄⣠⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣍⣻⢿⣿⣿⣿⡿⠟⠁⠀⠀⠀⠀⠼⣸⡽⡞⣰⣿⣿⣿⣿⡿⣿⣿  */
/*                                                            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠡⡁⢄⡈⠐⠀⠃⣿⣿⣿⡿⢃⣡⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣍⠛⠿⢿⣿⣿⣿⣿⣷⣝⠛⠁⠀⠀⠀⠀⠀⠀⠀⡇⣟⢎⣼⣿⣿⣿⠟⠉⣴⣿⣿  */
/*                                                            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡁⠂⠐⠡⠂⢠⣿⠟⣫⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⣀⠈⠛⢿⣿⣿⣿⣿⣦⡀⠀⠀⠀⠀⠈⠀⡿⢣⣾⣿⣿⠟⢡⢎⣾⣿⣿⣿  */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A') || (c <= '9'
			&& c >= '0'))
	{
		return (1);
	}
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>
// int main() {
// 	printf("%d\n", isalnum('0'));
// 	printf("%d\n", isalnum('9'));
// 	printf("%d\n", isalnum('A'));
// 	printf("%d\n", isalnum('~'));

// 	printf("%d\n", ft_isalnum('0'));
// 	printf("%d\n", ft_isalnum('9'));
// 	printf("%d\n", ft_isalnum('A'));
// 	printf("%d\n", ft_isalnum('~'));
// }
