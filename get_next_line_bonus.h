/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 17:34:48 by ctirions          #+#    #+#             */
/*   Updated: 2021/03/15 13:41:56 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

/*
**		MAIN FONCLTIONS
*/

char	*ft_check_error(int fd, char **line);
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
