/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:13:55 by gamoreir          #+#    #+#             */
/*   Updated: 2023/05/17 15:27:37 by gamoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include	<unistd.h>
# include	<string.h>
# include	<stdlib.h>
# include	<stdio.h>
# include	<ctype.h>
# include	<stdarg.h>
# include	<fcntl.h>

size_t	ft_strlen(const char *str);
char	*get_next_line(int fd);
char	*ft_substr(char const *str, unsigned int start, size_t len);
char	*ft_strdup(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *str, int c);

#endif 
