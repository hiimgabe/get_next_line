/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 21:17:56 by gamoreir          #+#    #+#             */
/*   Updated: 2023/04/14 14:31:47 by gamoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"



char	*get_line(int fd, char *buffer, char *file)
{
	int	count;
	char	*temp;

	count = 1;
	while (count != 0)
	{
		count = read(fd, buffer, BUFFER_SIZE);
		if (count < 0)
			return (0);
		if (count == 0)
			break ;
		buffer[count] = '\0';
		if (!file)
			file = ft_strdup("");
		temp = file;
		file = ft_strjoin(temp, buffer);
		free (temp);
		if (ft_strchr(buffer, '\0'))
			break ;
	}
	return (file);
}

char	*get_next_line(int fd)
{
	static char	*file;
	char	*line;
	char	*buffer;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	buffer = (char*)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (0);
	line = get_line(fd, buffer, file);
	free(buffer)
	if (!line)
	{
		free (file);
		file = 0;
		return (file);
	}
	file = extractfile(line);
	return (line);
}
