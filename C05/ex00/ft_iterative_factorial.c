/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 23:18:17 by jopedro2          #+#    #+#             */
/*   Updated: 2022/04/22 23:56:11 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	x;
	int	res;

	x = 1;
	res = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (x <= nb)
	{
		res = res * x;
		x++;
	}
	return (res);
}
