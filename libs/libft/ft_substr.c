/*                                                                                        ⣿⣿⣿⣿⣿⠿⢿⣿⣿⣿⣿⣿⢟⡋⠋⠁⠀⢀⣬⢟⣿⣿⣿⣿⣟⡻⣾⡿⣿⣿   */
/*                                                                                        ⣿⣿⣿⣿⣿⣌⠂⢂⣿⣿⢟⡵⠋⠀⠀⠀⠞⣩⣾⠿⢛⡩⣠⣾⢟⣿⢦⡀⠈⠻   */
/*                                                                                        ⣿⣿⣯⢿⣿⣿⣿⣿⡟⠁⠀⠀⡂⠀⠀⠀⠚⣩⠄⠐⢁⣼⣿⢫⢿⣿⠈⡇⡀⠀   */
/*                                                                                        ⣿⣿⣿⡏⣿⣿⣿⡟⡠⠀⣼⡿⠁⠀⣠⣴⡿⢁⡴⠁⣼⠟⢁⡏⢸⢸⠀⠀⢡⠀   */
/*   File:         ft_substr.c                                                            ⣿⣿⢛⠷⢿⣿⡿⣰⠃⠘⢋⠃⣠⣾⣿⣿⢁⣾⠁⢸⠏⡀⣼⡁⠀⠈⠀⠀⠸⡀   */
/*                                                                                        ⣿⣿⣎⣃⣵⣿⣻⢣⠀⠀⢀⣼⣷⣾⣿⡇⣾⡟⢀⠏⡐⣼⣿⣧⠀⠀⠀⠀⠀⣇   */
/*   Project:      maze-escape                                                            ⣿⣿⣿⣿⣿⣿⢧⢿⠇⠀⠎⢛⡋⠻⣿⣷⣿⣧⠈⣰⣳⣝⢿⣿⡀⠀⠀⠀⢠⢻   */
/*   Github:       marsdevx                                                               ⣿⣿⣿⣿⡿⠳⣳⠋⠀⠀⣼⠋⠀⠠⢸⣿⣿⣿⣠⣿⣿⣿⣷⣝⡷⠀⢠⠀⢨⢸   */
/*                                                                                        ⣿⣿⡿⢋⢄⠞⠁⣠⡆⢸⣿⢸⡻⡀⣸⣿⣿⣿⣿⣿⣿⠂⠉⠻⢿⣧⡈⢆⠀⠀   */
/*   Created:      06:02   05/01/2025                                                     ⣿⣿⠘⠁⢀⣴⣾⡿⢣⣦⢻⣬⣯⣾⣿⣿⣿⣿⣿⣿⢃⣤⣄⠠⣤⠹⣷⡈⠀⠀   */
/*   Updated:      06:02   05/01/2025                                                     ⠋⠁⠠⠊⠀⠀⠀⠾⡸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢘⣟⣫⢆⣿⡇⣿⠃⠀⠀   */
/*                                                                                        ⣀⢂⡔⢶⣿⠟⣫⣾⢿⣪⣟⢿⣿⣿⣿⣿⣿⣿⣿⣿⣧⣩⣵⣿⣿⡵⠁⡀⢀⣶   */
/*   Path:         ./libs/libft/ft_substr.c                                               ⣿⣾⣿⢆⡗⣾⣯⣷⡿⢟⣯⣾⣻⣞⢿⢿⣿⣿⣿⣿⣿⣿⣿⣟⣉⡤⢗⣵⣿⣿   */
/*                                                                                        ⣿⣿⢣⣿⣷⠽⣿⣿⣿⣿⢟⣯⣶⢹⣿⠿⡿⠿⠿⠿⢿⣿⣿⠿⣋⠾⢿⣛⣿⣿   */
/*                                                                                        ⣿⣷⣿⣿⣿⢸⣮⡻⣿⣿⣿⣿⠍⡚⢱⣿⡏⣿⡇⣿⡿⣶⣦⠀⠘⠿⠿⠽⠛⠃   */
/*                                                                                        ⣿⣿⣿⣹⣾⣼⣿⣿⣷⣭⣭⣵⠇⣥⣾⣿⣿⣿⣿⣿⣿⣿⢣⣾⣿⣿⣿⣿⣷⣥   */
/*                                                                                        ⣿⣿⣿⣿⣿⣽⣿⣿⣿⣿⣿⡿⣴⡹⣿⣿⣿⣿⣿⣿⣿⢧⣿⣿⣿⣿⣿⣿⣿⣿   */
/*                                                                                        ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣭⣽⣿⣿⣯⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿   */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (str == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	const char *str = "Hello, World!";
// 	char *substr = ft_substr(str, 7, 5); // Expected to return "World"
// 	if (substr != NULL)
// 			printf("Extracted substring: %s\n", substr);
// 	else
// 			printf("Memory allocation failed in case 1\n");
// 	free(substr);
// 	return (0);
// }