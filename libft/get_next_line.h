/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjacquem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 14:04:30 by fjacquem          #+#    #+#             */
/*   Updated: 2016/05/04 15:45:06 by fjacquem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFF_SIZE
#  define BUFF_SIZE 1024
# endif
# ifndef DELIM
#  define DELIM '\n'
# endif
# ifndef BIN_MODE
#  define BIN_MODE 1
# endif
# include <fcntl.h>
# include "libft.h"

typedef struct	s_gnl
{
	int			fd;
	char		*buffer;
}				t_gnl;

int				get_next_line(const int fd, char **line);

#endif
