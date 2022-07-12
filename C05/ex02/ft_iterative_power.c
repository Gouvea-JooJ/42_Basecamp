/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 23:27:15 by jopedro2          #+#    #+#             */
/*   Updated: 2022/04/23 01:32:02 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if ((power == 0) || (nb == 0 && power == 0))
		return (1);
	while (power > 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
