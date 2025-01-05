/*                                                                      ⣿⣿⣿⣿⣿⣿⡟⢼⢾⢸⣿⣷⣤⡛⢿⣿⣿⣿⣿⣿⠿⠿⠿⠿⢿⣿⣿⡿⣫⣴⣿⣿⡇⡃⢻⣷⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿   */
/*                                                                      ⣿⣿⣿⣿⣿⣿⢰⠿⢰⢸⣿⣿⣶⣝⣷⠩⠶⢶⣶⠆⡘⠿⠿⣛⣓⣒⡆⠴⣿⣿⣿⣿⢣⣷⣆⠻⡆⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿   */
/*                                                                      ⣿⣿⣿⣿⣿⡇⣄⢾⣿⡘⣿⣿⡿⢛⣥⣶⣿⣿⣿⣧⢁⠈⢿⣿⣿⣿⣿⣷⡲⢭⡛⠏⣼⣿⣿⠃⡇⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿   */
/*                                                                      ⣿⣿⣿⣿⣿⡇⡉⢼⣿⣷⠙⣡⣾⣿⡟⠑⠛⠋⠁⠀⠈⣆⠀⠀⠈⠀⠀⠉⠙⠈⠻⠷⢌⠻⣿⢓⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿   */
/*                                                                      ⣿⣿⣿⣿⣿⣿⠟⠠⡿⢣⣾⣿⣿⡟⠀⠀⠀⠀⠀⠀⠂⠘⣆⠀⠀⠀⠐⠊⠁⠀⠉⠍⣼⣷⡌⠌⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿   */
/*                                                                      ⣿⣿⣿⣿⣿⠇⣼⡇⣰⣿⣿⣿⡿⠀⠀⠀⣀⢀⡀⣀⣠⣤⡘⣦⡠⣶⣦⣤⣤⡄⣤⣄⢻⣿⡻⣆⠸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿   */
/*   File:         ft_strncmp.c                                         ⣿⣿⣿⣿⠏⢰⡿⣰⣿⣿⣿⣿⢣⣾⣿⣿⡟⢸⢣⣿⣿⣿⣿⣌⢳⡄⢿⣿⣿⣷⢹⣿⡇⢿⣷⣹⣆⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿   */
/*                                                                      ⣿⣿⣿⡏⣄⣿⢃⣿⣿⣿⣿⡏⣼⣿⣿⡟⣸⢸⠈⣿⠘⣿⣙⣿⡇⡙⢆⠻⣿⣿⡘⣿⣿⢸⣟⣧⢻⡎⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿   */
/*   Project:      maze-escape                                          ⣿⣿⣿⡃⢸⡿⣸⣿⣿⣿⣿⡇⣿⣿⠁⠇⣿⢸⢀⢿⠀⢹⣿⣿⡇⢿⠈⡑⠙⢿⡇⢹⣿⡇⣿⣿⡎⢿⠸⣿⣿⣿⣿⣿⣿⣿⣿⣿   */
/*   Github:       marsdevx                                             ⣿⣿⣿⠁⣿⡇⣿⣿⣿⣿⣿⣇⢹⡏⡆⢸⣿⡇⢸⡘⠈⠂⢻⣿⡇⠘⠄⠱⠀⢀⠁⠀⣿⡇⣿⣿⣿⡼⡇⣿⣿⣿⣿⣿⣿⣿⣿⣿   */
/*                                                                      ⣿⣿⣿⢲⣿⢸⡿⣿⣿⣿⣿⣿⠈⡃⣓⠘⠿⠷⠈⣧⡘⠆⡀⠻⣷⠰⡄⠡⠀⠈⠃⣀⢈⠙⠿⣿⣿⣧⣳⢹⣿⣿⣿⣿⣿⣿⣿⣿   */
/*   Created:      06:02   05/01/2025                                   ⣿⣿⣿⢸⣿⢹⣿⠸⣿⣿⣿⣿⢀⠃⣿⣿⣿⣿⣦⠲⣶⣼⣿⣶⣬⣁⠶⠦⠷⠷⣼⣿⠈⣼⣶⣬⢙⠻⢿⠸⣿⣿⣿⣿⣿⣿⣿⣿   */
/*   Updated:      06:02   05/01/2025                                   ⣿⣿⣿⢸⣿⢸⣿⣧⠹⣿⣿⣿⠸⣦⣠⣤⠄⠀⢰⣶⣿⣿⣿⣿⣿⣷⣶⡤⠀⠠⢠⣴⡇⣹⣿⠟⣸⣿⣷⢰⣦⣭⣍⣙⣛⣻⣿⣿   */
/*                                                                      ⣿⣿⣿⢸⣿⢈⢿⣿⣧⠹⣿⣿⡆⣿⣿⣿⣦⣤⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣤⣴⣿⡇⣿⠟⣴⣿⣿⡿⢸⣿⣿⣿⣿⣿⣿⣿⣿   */
/*   Path:         ./libs/libft/ft_strncmp.c                            ⣿⣿⣿⣼⣿⠘⣎⢻⣿⣷⡘⢿⣧⠸⣿⠋⢉⢝⣁⣽⣿⣿⣿⣿⣿⣿⣿⣅⣵⡋⢈⡋⠰⢋⣼⣿⣿⡟⠁⣾⣿⣿⣿⣿⣿⣿⣿⣿   */
/*                                                                      ⣿⣿⣿⡘⣿⡇⢿⣦⡻⣿⣿⣦⡙⠧⠹⣶⣿⣿⣿⣿⣿⣿⣿⣿⣷⣿⣿⣿⣿⣿⡿⡁⢠⣿⣿⣿⢋⣼⢡⣿⣿⣿⣿⣿⣿⣿⣿⣿   */
/*                                                                      ⣿⣿⣿⡇⢿⣿⡌⢿⣷⣜⢿⣿⣷⡄⢦⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢃⣿⣿⡟⣡⣿⢃⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿   */
/*                                                                      ⣿⣿⣿⡇⡼⣿⣿⣌⠻⣿⣷⡙⢿⣿⡘⠿⣿⣿⣿⣿⣿⣿⣶⣶⣿⣿⣿⣿⡿⢋⠁⣾⡿⢫⣾⡿⡁⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿   */
/*                                                                      ⣿⣿⣿⢸⡇⢹⣿⣿⣷⢈⠙⢿⣦⡻⣧⠀⢢⣍⠛⠿⢿⣿⣿⣿⡿⠟⢋⣥⣾⠈⣸⢏⣴⠿⢋⣴⠇⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿   */
/*                                                                      ⣿⣿⢃⠞⡜⡈⣿⣿⡏⣿⢸⣷⣌⠻⣼⡆⠈⢀⣈⠻⠶⢶⣭⠵⢖⣀⠀⣿⣿⢠⠏⣪⠔⠁⣿⣿⠸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿   */
/*                                                                      ⣿⠋⢊⣾⢣⣧⣿⠿⢙⣋⣚⡛⣛⡁⣌⠣⢰⢈⠛⣉⣛⠲⠈⠜⢛⣋⡄⡌⠉⠘⡜⣁⣩⣤⣭⣛⠃⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿   */
/*                                                                      ⢁⣴⡿⢣⣿⡟⣰⣾⣿⣿⣿⣷⠙⣱⣿⣧⡀⢸⡇⣿⡯⠅⠘⠀⠴⠿⠃⠿⠀⡏⡌⣿⣏⢻⣿⣿⣿⣦⢈⠻⣿⣿⣿⣿⣿⣿⣿⣿   */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!s1 && !s2)
		return (0);
	if (!s1)
		return (-1);
	if (!s2)
		return (1);
	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main() {
// 	const char *str1 = "Hello, world!";
// 	const char *str2 = "Hello, there!";
// 	int result = strncmp(str1, str2, 7);
// 	if (result == 0) {
// 		printf("The first 7 characters of both strings are equal.\n");
// 	} else if (result < 0) {
// 		printf("str1 is less than str2 in the first 7 characters.\n");
// 	} else {
// 		printf("str1 is greater than str2 in the first 7 characters.\n");
// 	}

// 	int my_result = ft_strncmp(str1, str2, 7);
// 	if (my_result == 0) {
// 		printf("The first 7 characters of both strings are equal.\n");
// 	} else if (my_result < 0) {
// 		printf("str1 is less than str2 in the first 7 characters.\n");
// 	} else {
// 		printf("str1 is greater than str2 in the first 7 characters.\n");
// 	}
// 	return (0);
// }
