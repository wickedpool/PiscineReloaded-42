/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgiraud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 16:35:44 by thgiraud          #+#    #+#             */
/*   Updated: 2016/11/04 10:57:28 by thgiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		res;

	i = nb;
	res = 1;
	if (nb < 0 || nb > 12)
		res = 0;
	else if (nb == 1 || nb == 0)
		res = 1;
	while (i > 1 && i <= 12)
	{
		res = res * i;
		i--;
	}
	return (res);
}
