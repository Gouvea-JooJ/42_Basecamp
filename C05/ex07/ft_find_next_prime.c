/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 23:50:24 by jopedro2          #+#    #+#             */
/*   Updated: 2022/04/22 23:58:32 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (nb <= 1)
		return (0);
	while (x <= nb / x)
	{
		if (nb % x == 0)
			return (0);
		x++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}