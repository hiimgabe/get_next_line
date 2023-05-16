#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
# endif

# include	<unistd.h>
# include	<string.h>
# include	<stdlib.h>
# include	<stdio.h>
# include	<ctype.h>
# include	<stdarg.h>

size_t	linesize(int fd);
char	*get_next_line(int fd);

# endif 
