/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgiraud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 07:47:15 by thgiraud          #+#    #+#             */
/*   Updated: 2016/11/05 12:41:08 by thgiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		ft_sort_params(int ac, char **av)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	j = 1;
	while (ac > i)
	{
		while (ac > j)
		{
			if (ft_strcmp(av[i], av[j]) < 0)
			{
				tmp = av[i];
				av[i] = av[j];
				av[j] = tmp;
			}
			j++;
		}
		i++;
		j = 1;
	}
	return (0);
}

int		main(int ac, char **av)
{
	int		i;

	i = 1;
	ft_sort_params(ac, av);
	while (ac > i)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
