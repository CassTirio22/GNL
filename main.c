/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 18:01:09 by ctirions          #+#    #+#             */
/*   Updated: 2020/12/21 18:07:39 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int		fd;
	int		i;
	char	*str;

	if (!(fd = open("texte.txt", O_RDONLY)))
		return (-1);
	i = 18;
	while (i--)
	{
		get_next_line(fd, &str);
		printf("%s\n", str);
	}
	close(fd);
	return (0);
}
