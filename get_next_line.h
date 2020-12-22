/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 13:19:47 by ctirions          #+#    #+#             */
/*   Updated: 2020/12/22 14:13:15 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <limits.h>
# include <stdio.h>

/*
**		MAIN FONCLTIONS
*/

int		get_next_line(int fd, char **line);
char	*ft_linecpy(char *save);
char	*ft_savecpy(char *save);
char	*ft_strdup(char *save);

/*
**		UTILS FONCLTIONS
*/

int		ft_strlen(const char *str);
void	*ft_calloc(int size, int count);
char	*ft_strjoin(const char *s1, const char *s2);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int		ft_isreturn(char *str);

#endif
