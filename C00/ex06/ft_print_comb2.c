/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopedro2 <jopedro2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 02:10:50 by jopedro2          #+#    #+#             */
/*   Updated: 2022/04/22 00:47:03 by jopedro2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	c;
	int		contador1;
	int		contador2;

	write (1, "00 01", 5);
	contador1 = 0;
	contador2 = 2;
	while (contador1 < 100 && contador2 < 100)
	{
		write (1, ", ", 2);
		c = contador1 / 10 + '0';
		write (1, &c, 1);
		c = contador1 % 10 + '0';
		write (1, &c, 1);
		write (1, " ", 1);
		c = contador2 / 10 + '0';
		write (1, &c, 1);
		c = contador2 % 10 + '0';
		write (1, &c, 1);
		contador2++;
		if (contador2 == 100)
		contador2 = ++contador1 + 1;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/
// gcc -Wall -Wextra -Werror ft_print_comb2.c && ./a.out
