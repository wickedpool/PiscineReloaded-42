/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thgiraud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 17:02:17 by thgiraud          #+#    #+#             */
/*   Updated: 2016/11/04 19:58:19 by thgiraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int		res;

	if (nb < 0 || nb > 12)
		res = 0;
	else if (nb > 1 && nb <= 12)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		res = 1;
	return (res);
}
