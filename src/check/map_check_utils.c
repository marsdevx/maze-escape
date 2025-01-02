/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_check_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:30:23 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/12/17 19:09:55 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	update_counts(char c, t_counts *counts)
{
	if (c == 'C')
		counts->collectibles++;
	else if (c == 'E')
		counts->exits++;
	else if (c == 'P')
		counts->players++;
	else if (c != '0' && c != '1' && c != '\n')
	{
		ft_printf("Error: Invalid character '%c' found in the map.\n", c);
		exit(EXIT_FAILURE);
	}
}

void	process_buffer(char *buffer, ssize_t bytes_read, t_counts *counts)
{
	ssize_t	i;

	i = 0;
	while (i < bytes_read)
	{
		update_counts(buffer[i], counts);
		i++;
	}
}

void	count_map_chars(t_vars *vars)
{
	int			fd;
	char		buffer[1024];
	ssize_t		bytes_read;
	t_counts	counts;

	counts.players = 0;
	counts.exits = 0;
	counts.collectibles = 0;
	fd = open_map_file(vars->path);
	bytes_read = read(fd, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		process_buffer(buffer, bytes_read, &counts);
		bytes_read = read(fd, buffer, sizeof(buffer));
	}
	close(fd);
	vars->map_info.all_players = counts.players;
	vars->map_info.all_exits = counts.exits;
	vars->map_info.all_collectible = counts.collectibles;
}

int	has_valid_extension(const char *path)
{
	const char	*extension = ".ber";
	size_t		path_len;
	size_t		ext_len;
	char		*last_ber;

	path_len = ft_strlen(path);
	ext_len = ft_strlen(extension);
	if (path_len < ext_len)
		return (0);
	last_ber = ft_strnstr(path, extension, path_len);
	if (!last_ber)
		return (0);
	if (ft_strlen(last_ber) == ext_len)
		return (1);
	return (0);
}
