/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgiraud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 12:25:07 by thgiraud          #+#    #+#             */
/*   Updated: 2016/11/04 18:19:12 by thgiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int		ft_display_file(char *str)
{
	int		res;
	int		fd;
	char	buf[1200 + 1];

	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("File opening failed. \n");
		return (1);
	}
	while ((res = read(fd, buf, 1200)))
	{
		buf[res] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
	{
		ft_putstr("File closing failed. \n");
		return (1);
	}
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	else if (ac > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	else
		ft_display_file(av[1]);
	return (0);
}
